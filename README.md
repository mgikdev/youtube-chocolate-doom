# YouTube Doom
a fork of portalrunner's chocolate-doomcord that will probably soon be modified to work better with youtube idk if this even needs any modifications yet to make this work just figured it would be good to make a fork in advance

oh yeah it's basically just the video sequence thing except via youtube, so:

## the game plan
to kick this off, a youtube channel will post a starter video, just a still of the starting position of the first level of doom, then the user will be prompted to check the description for links, probably formatted like this:
```
move forward - https://whatever.lol/(sequence with w appended)
move backward - https://whatever.lol/(sequence with s appended)
turn left - https://whatever.lol/(sequence with a appended)
turn right - https://whatever.lol/(sequence with d appended)
...and so on
```

when the link is clicked, the server will check if that sequence exists on the channel, if it does, it will redirect to it. if not, it'll start generating the video, and then redirect to the video after it's automatically updated.

the best thing about this is there's no need to keep the previous videos stored on my server, since youtube is free storage!
