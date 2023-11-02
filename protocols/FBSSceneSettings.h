
@protocol FBSSceneSettings

@required

- (FBSDisplayConfiguration *)displayConfiguration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (long long)interfaceOrientation;
- (long long)interruptionPolicy;
- (bool)isClientFuture;
- (bool)isForeground;
- (bool)isOccluded;
- (double)level;
- (void)setClientFuture:(bool)arg1;
- (void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1;
- (void)setForeground:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setInterruptionPolicy:(long long)arg1;
- (void)setLevel:(double)arg1;
- (void)setOccluded:(bool)arg1;

@optional

- (BOOL)activityMode;
- (BOOL)jetsamMode;
- (bool)prefersProcessTaskSuspensionWhileSceneForeground;
- (void)setActivityMode:(BOOL)arg1;
- (void)setJetsamMode:(BOOL)arg1;
- (void)setPrefersProcessTaskSuspensionWhileSceneForeground:(bool)arg1;

@end
