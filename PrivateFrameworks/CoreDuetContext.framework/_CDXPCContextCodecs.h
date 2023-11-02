
@interface _CDXPCContextCodecs : _CDXPCCodecs

+ (bool)addKeyPaths:(id)arg1 toDictionary:(id)arg2 error:(id*)arg3;
+ (bool)addRegistration:(id)arg1 toDictionary:(id)arg2 error:(id*)arg3;
+ (id)commonContextValueNotificationsEventWithType:(const char *)arg1 registration:(id)arg2 deviceIDs:(id)arg3 error:(id*)arg4;
+ (id)fetchPropertiesEventWithRemoteKeyPaths:(id)arg1 error:(id*)arg2;
+ (id)keyPathsFromDictionary:(id)arg1 error:(id*)arg2;
+ (id)keyPathsFromFetchPropertiesEvent:(id)arg1 error:(id*)arg2;
+ (bool)parseSubscribeToContextValueNotificationsEvent:(id)arg1 registration:(id*)arg2 deviceIDs:(id*)arg3 error:(id*)arg4;
+ (bool)parseUnsubscribeFromContextValueNotificationsEvent:(id)arg1 registration:(id*)arg2 deviceIDs:(id*)arg3 error:(id*)arg4;
+ (id)registrationFromDictionary:(id)arg1 error:(id*)arg2;
+ (id)subscribeToContextValueNotificationsEventWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id*)arg3;
+ (id)subscribeToContextValueNotificationsReplyWithEvent:(id)arg1 error:(id)arg2;
+ (id)supportedClassesToUnarchive;
+ (id)unsubscribeFromContextValueNotificationsEventWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id*)arg3;
+ (id)unsubscribeFromContextValueNotificationsReplyWithEvent:(id)arg1 error:(id)arg2;

@end
