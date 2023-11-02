
@interface RWIProtocolDebuggerAssertPauseReason : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *message;

- (id)message;
- (void)setMessage:(id)arg1;

@end
