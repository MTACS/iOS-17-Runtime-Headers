
@protocol DTConditionInducerServiceAPI <DTXAllowedRPC>

@required

- (NSArray *)availableConditionInducers;
- (NSNumber *)disableActiveCondition;
- (NSNumber *)disableConditionWithIdentifier:(NSString *)arg1;
- (NSNumber *)enableConditionWithIdentifier:(NSString *)arg1 profileIdentifier:(NSString *)arg2;

@end
