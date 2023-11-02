
@interface _CDXPCCodecs : NSObject

+ (id)_log;
+ (bool)addDeviceIDs:(id)arg1 toDictionary:(id)arg2 error:(id*)arg3;
+ (void)addError:(id)arg1 toReply:(id)arg2;
+ (id)deviceIDsFromDictionary:(id)arg1 error:(id*)arg2;
+ (id)errorFromReply:(id)arg1;
+ (long long)eventTypeWithEvent:(id)arg1;
+ (id)fetchPropertiesReplyWithEvent:(id)arg1 error:(id)arg2;
+ (id)fetchProxySourceDeviceUUIDEvent;
+ (id)fetchProxySourceDeviceUUIDReplyWithEvent:(id)arg1 sourceDeviceUUID:(id)arg2 error:(id)arg3;
+ (id)keepAliveEventWithKeepAlive:(bool)arg1 error:(id*)arg2;
+ (bool)keepAliveFromKeepAliveEvent:(id)arg1 error:(id*)arg2;
+ (id)keepAliveReplyWithEvent:(id)arg1 error:(id)arg2;
+ (id)messageTypeFromEvent:(id)arg1;
+ (id)notificationEventWithRegistrationIdentifier:(id)arg1 info:(id)arg2 error:(id*)arg3;
+ (bool)parseNotificationEvent:(id)arg1 registrationIdentifier:(id*)arg2 info:(id*)arg3 error:(id*)arg4;
+ (id)parseProxySourceDeviceUUIDEvent:(id)arg1 error:(id*)arg2;
+ (id)requestActivateDevicesEvent;
+ (id)requestActivateDevicesReplyWithEvent:(id)arg1 error:(id)arg2;
+ (id)supportedClassesToUnarchive;

@end
