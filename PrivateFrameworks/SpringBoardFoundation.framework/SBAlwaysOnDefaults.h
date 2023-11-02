
@interface SBAlwaysOnDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool enableAlwaysOn;
@property (nonatomic) bool enableSwipeToUnlock;
@property (nonatomic) bool enableTapToInteract;
@property (nonatomic) bool enforceOverallAPLLimit;
@property (nonatomic) bool forceAndromedaSupport;
@property (nonatomic, retain) NSNumber *maximumRenderInterval;
@property (nonatomic) bool showNotificationsInAlwaysOn;
@property (nonatomic) bool showWallpaperInAlwaysOn;
@property (nonatomic) bool useAlwaysOnBrightnessCurve;
@property (nonatomic) bool useDebugColors;

- (void)_bindAndRegisterDefaults;

@end
