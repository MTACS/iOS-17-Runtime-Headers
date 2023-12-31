
@interface RWIProtocolDebuggerBreakpointOptions : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic) bool autoContinue;
@property (nonatomic, copy) NSString *condition;
@property (nonatomic) int ignoreCount;

- (id)actions;
- (bool)autoContinue;
- (id)condition;
- (int)ignoreCount;
- (void)setActions:(id)arg1;
- (void)setAutoContinue:(bool)arg1;
- (void)setCondition:(id)arg1;
- (void)setIgnoreCount:(int)arg1;

@end
