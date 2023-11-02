
@protocol BKSHIDEventDeliveryService <NSObject>

@required

- (void)setBufferingPredicates:(NSSet *)arg1;
- (void)setDeferringRules:(NSArray *)arg1;
- (void)setDiscreteDispatchingRuleSets:(NSDictionary *)arg1;
- (void)setKeyCommandsDispatchingRules:(NSDictionary *)arg1;
- (void)setKeyCommandsRegistrations:(NSSet *)arg1;

@end
