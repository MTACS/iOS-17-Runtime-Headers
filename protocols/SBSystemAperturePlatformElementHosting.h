
@protocol SBSystemAperturePlatformElementHosting <NSObject>

@required

- (void)elementRequestsDiscreteAnimationOfType:(long long)arg1;
- (<SAInvalidatable> *)elementRequestsPersistentAnimationOfType:(long long)arg1;
- (<SAInvalidatable> *)requestUrgentAndImportantPriorityWithReason:(NSString *)arg1;
- (<SAInvalidatable> *)urgentAndImportantAssertion;

@end
