
@protocol EDOneTimeCodeChangeHookResponder <NSObject>

@required

- (void)didReceiveOneTimeCode:(NSString *)arg1 timestamp:(NSDate *)arg2 messageID:(long long)arg3 subject:(NSString *)arg4 senders:(NSArray *)arg5;

@end
