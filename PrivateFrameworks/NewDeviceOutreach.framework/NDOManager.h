
@interface NDOManager : NSObject

+ (void)postCAEventFor:(id)arg1 eventDict:(id)arg2;

- (id)agentConnection;
- (void)appSupportDictionaryWithReply:(id /* block */)arg1;
- (void)appleAccountAddedWithReply:(id /* block */)arg1;
- (bool)checkIsAvailableInStore:(id)arg1;
- (id)defaultDevice;
- (void)dismissFollowUpForSerialNumber:(id)arg1 completion:(id /* block */)arg2;
- (void)dismissNotificationForSerialNumber:(id)arg1 completion:(id /* block */)arg2;
- (void)getAllFUPEligibleDeviceInfosUsingPolicy:(unsigned long long)arg1 updateFollowUps:(bool)arg2 withReply:(id /* block */)arg3;
- (void)getDecodedParamsForPath:(id)arg1 withReply:(id /* block */)arg2;
- (id)getDefaultDeviceInfoUsingForceCachedPolicy;
- (void)getDefaultDeviceInfoUsingPolicy:(unsigned long long)arg1 withReply:(id /* block */)arg2;
- (void)getDeviceInfoForSerialNumber:(id)arg1 usingPolicy:(unsigned long long)arg2 sessionID:(id)arg3 params:(id)arg4 andForcePostFollowup:(bool)arg5 withReply:(id /* block */)arg6;
- (void)getDeviceInfoForSerialNumber:(id)arg1 usingPolicy:(unsigned long long)arg2 withReply:(id /* block */)arg3;
- (id)getDeviceInfoUsingForceCachedPolicyForSerialNumber:(id)arg1;
- (void)getWarrantyUsingPolicy:(unsigned long long)arg1 withReply:(id /* block */)arg2;
- (id)pairedBTDevices;
- (id)pairedWatches;
- (void)scheduleOutreachAfter:(double)arg1 withReply:(id /* block */)arg2;
- (void)ulWebURLOverride:(id /* block */)arg1;
- (void)webURLOverride:(id /* block */)arg1;

@end
