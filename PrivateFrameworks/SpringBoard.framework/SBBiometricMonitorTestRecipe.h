
@interface SBBiometricMonitorTestRecipe : NSObject <SBTestRecipe> {
    SBBiometricMonitorTestRecipeDummyDataSource * _dataSource;
    SBBiometricMonitorUI * _monitorUI;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)setWindowScene:(id)arg1;
- (id)title;
- (id)windowScene;
- (void)windowSceneDidUpdate:(id)arg1;

@end
