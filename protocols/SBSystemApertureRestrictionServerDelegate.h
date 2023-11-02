
@protocol SBSystemApertureRestrictionServerDelegate <NSObject>

@required

- (<SAInvalidatable> *)restrictSystemApertureToInertWithReason:(NSString *)arg1;
- (<SAInvalidatable> *)suppressSystemApertureCompletelyWithReason:(NSString *)arg1;

@end
