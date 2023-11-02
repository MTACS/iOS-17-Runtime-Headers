
@interface IMPowerLog : NSObject

+ (id)sharedInstance;

- (void)logMessageReceivedWithGUID:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3 conversationType:(unsigned long long)arg4 messageType:(unsigned long long)arg5;
- (void)logMessageSendFailureWithError:(id)arg1;
- (void)logMessageSentWithGUID:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3 conversationType:(unsigned long long)arg4 messageType:(unsigned long long)arg5 sendDuration:(id)arg6 errorCode:(id)arg7;

@end
