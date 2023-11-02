
@interface RWIProtocolDebuggerCSPViolationPauseReason : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *directive;

- (id)directive;
- (id)initWithDirective:(id)arg1;
- (void)setDirective:(id)arg1;

@end
