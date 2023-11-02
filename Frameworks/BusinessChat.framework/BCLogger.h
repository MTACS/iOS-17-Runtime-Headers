
@interface BCLogger : NSObject

+ (void)logEventWithName:(id)arg1 businessURI:(id)arg2 callToActionText:(id)arg3 bizItemReturnedAfterAction:(bool)arg4 latency:(long long)arg5;
+ (void)logEventWithName:(id)arg1 version:(long long)arg2 authDomain:(id)arg3 status:(id)arg4;

- (void)mt_log_icloud_messages_apps_businessframework:(id)arg1 version:(long long)arg2;

@end
