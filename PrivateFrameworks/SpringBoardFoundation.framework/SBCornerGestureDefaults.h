
@interface SBCornerGestureDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) unsigned long long bottomLeftCornerGestureFeature;
@property (nonatomic) unsigned long long bottomLeftCornerGestureTouchTypes;
@property (nonatomic) unsigned long long bottomRightCornerGestureFeature;
@property (nonatomic) unsigned long long bottomRightCornerGestureTouchTypes;
@property (nonatomic, readonly) unsigned long long cornerGestureRequiresEducation;

- (void)_bindAndRegisterDefaults;
- (void)_migrateSkyDefaultsIfNecessary;

@end
