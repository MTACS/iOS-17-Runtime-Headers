
@interface SBInsecureDrawingAlertItemTestRecipe : NSObject <SBTestRecipe> {
    SBInsecureDrawingAlertItem * _alertItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)title;

@end
