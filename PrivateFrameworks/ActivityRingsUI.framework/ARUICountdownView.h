
@interface ARUICountdownView : ARUIRingsView

@property (nonatomic, readonly) ARUIRingGroupController *countdownController;

+ (id)countdownViewConfiguredForCompanion;
+ (id)countdownViewConfiguredForDisplayWithRingDiameter:(float)arg1;
+ (id)countdownViewConfiguredForWatch;

- (id)backingTrackRingGroup;
- (id)countdownController;
- (id)ringGroup;

@end
