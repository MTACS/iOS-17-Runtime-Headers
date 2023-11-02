
@interface RWIProtocolDebuggerBreakpointPauseReason : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *breakpointId;

- (id)breakpointId;
- (id)initWithBreakpointId:(id)arg1;
- (void)setBreakpointId:(id)arg1;

@end
