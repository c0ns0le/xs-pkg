#!/usr/bin/python

from random import randint
import vk

s = "09c7b3b0e43207cdf9b481f936eaafeee3f97502398d712ef535a36901d422b9c0b569b0bac5da111ab28"

vkapi = vk.API(access_token=s)
#vkapi.wall.post(message="Hello, world!")
profiles = vkapi.users.get(user_id=1,fields='counters')
print profiles[0]['first_name'],profiles[0]['last_name']
print profiles[0]['counters']['friends']
