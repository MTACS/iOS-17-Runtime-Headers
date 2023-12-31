
@interface CCUIControlCenterDefaults : BSAbstractDefaultDomain

@property (nonatomic) bool hasForceTouchedToExpandModule;
@property (nonatomic) bool hasLongPressedToExpandModule;
@property (nonatomic, readonly) bool shouldAlwaysBeEnabled;
@property (nonatomic, readonly) bool shouldExcludeControlCenterFromStatusBarOverrides;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
