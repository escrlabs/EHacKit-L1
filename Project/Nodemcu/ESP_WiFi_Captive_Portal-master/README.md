
WiFi captive portal for the NodeMCU (ESP8266 Module) with DNS spoofing.



This project is for testing and educational purposes. Use it only against your own networks and devices. I don't take any responsibility for what you do with this program.



- :muscle: The LED will blink 5 times when a password is posted.
- :muscle: All captured password will be stored in the ESP8266 itself.
- :muscle:Your saved passwords will <b> not </b> disappear when you:

  - :arrow_forward: Restart/power off the ESP8266.
  - :arrow_forward: Change the SSID.

- :muscle: You can clear saved password when necessary.
- :muscle: You can change the SSID name from the portal itself.

<!-- Working -->



- Passwords and SSID will be stored in the EEPROM of the ESP8266.
- EEPROM Memory location:
  - 0-19 :arrow_forward: For storing SSID.
  - 20-24 :arrow_forward: To check the first boot of ESP8266.
  - 30-END :arrow_forward: For storing password.
- When ESP8266 boots for the first time, it checks the data in memory location (20-24) in EEPROM.
- After the first boot, it only loads the SSID and all passwords in the EEPROM.
- If there is no SSID in the EEPROM, default SSID will be set.

<!-- Usage -->


- :pencil2: <b>Changing the SSID: </b>:arrow_forward: <b>172.0.0.1/ssid</b>:arrow_backward:
- :boom:<b>Clearing the passwords: </b>:arrow_forward: <b>172.0.0.1/clear</b>:arrow_backward:
- :see_no_evil: <b> To see saved passwords: </b> :arrow_forward: <b>172.0.0.1/pass</b>:arrow_backward:
- :scroll: <b> Testing victim page: </b> :arrow_forward: <b>172.0.0.1/index</b>:arrow_backward:



<table>
  <tr>
    <th>172.0.0.1/index</th>
    <th>172.0.0.1/post</th> 
    <th>172.0.0.1/pass</th>
    <th>172.0.0.1/ssid</th>
  </tr>
  <tr>
    <td>This is the main page. Here the user will write his password and send it.</td>
    <td>This is the post page. The user will be redirected here after posting the password.</td>
    <td>This is where the attacker can retrieve all the passwords that has been posted and saved passwords can be cleared.</td>
    <td>Here the attacker can change the SSID name of the Access Point on the go.</td>

</table>

