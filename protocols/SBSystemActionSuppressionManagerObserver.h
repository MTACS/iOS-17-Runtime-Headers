
@protocol SBSystemActionSuppressionManagerObserver <NSObject>

@required

- (void)systemActionSuppressionManager:(SBSystemActionSuppressionManager *)arg1 didUpdateSuppressionStatus:(SBSystemActionSuppressionStatus *)arg2;

@end
