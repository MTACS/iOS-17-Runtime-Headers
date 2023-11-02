
@interface SBOmnibusAlertItemTestRecipe : NSObject <SBTestRecipe> {
    SBAlertItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_anyAppIcon;
- (id)_anySUDescriptor;
- (id)_anyUserInstalledAppIcon;
- (void)_dismissCurrentItem;
- (id)_mapsApp;
- (id)_nextAlertItemToTest;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)title;

@end
