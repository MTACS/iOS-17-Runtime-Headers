
@interface SBMedusaAppsTestRecipe : NSObject <SBTestRecipe> {
    bool  _activated;
    FBApplicationUpdateScenesTransaction * _currentTransaction;
    NSString * _leftTestBundleID;
    NSString * _rightTestBundleID;
}

@property (nonatomic, retain) FBApplicationUpdateScenesTransaction *currentTransaction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_toggle;
- (void)_updateAppsToBringUpFromPreferences;
- (id)currentTransaction;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;
- (void)setCurrentTransaction:(id)arg1;
- (id)title;

@end
