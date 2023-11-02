
@protocol IDSServiceDelegatePrivate <IDSServiceDelegate>

@optional

- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 alternateCallbackID:(NSString *)arg4 willSendToDestinations:(NSArray *)arg5 skippedDestinations:(NSArray *)arg6 registrationPropertyToDestinations:(NSDictionary *)arg7;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingTopLevelMessage:(NSDictionary *)arg3 fromID:(NSString *)arg4 messageContext:(id)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 messageIdentifier:(NSString *)arg3 alternateCallbackID:(NSString *)arg4 updatedWithResponseCode:(long long)arg5 error:(NSError *)arg6 lastCall:(bool)arg7;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 messageIdentifier:(NSString *)arg3 alternateCallbackID:(NSString *)arg4 updatedWithResponseCode:(long long)arg5 error:(NSError *)arg6 lastCall:(bool)arg7 messageContext:(IDSMessageContext *)arg8;
- (void)service:(IDSService *)arg1 didFlushCacheForKTPeerURI:(NSString *)arg2;
- (void)service:(IDSService *)arg1 didFlushCacheForRemoteURI:(NSString *)arg2 fromURI:(NSString *)arg3 guid:(NSString *)arg4;
- (void)service:(IDSService *)arg1 didHintCheckingTransportLogWithReason:(long long)arg2;
- (void)service:(IDSService *)arg1 didUpdatePseudonymsWithChanges:(NSArray *)arg2;
- (void)service:(IDSService *)arg1 token:(NSString *)arg2 time:(double)arg3 error:(NSError *)arg4;

@end
