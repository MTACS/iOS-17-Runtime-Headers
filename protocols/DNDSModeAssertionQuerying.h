
@protocol DNDSModeAssertionQuerying <NSObject>

@required

- (NSArray *)modeAssertionInvalidationsMatchingPredicate:(NSPredicate *)arg1;
- (NSArray *)modeAssertionsMatchingPredicate:(NSPredicate *)arg1;

@end
