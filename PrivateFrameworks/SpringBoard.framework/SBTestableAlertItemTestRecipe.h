
@interface SBTestableAlertItemTestRecipe : NSObject <SBTestRecipe> {
    SBAlertItem * _item;
    NSArray * _recipesToTest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *recipesToTest;
@property (readonly) Class superclass;

+ (id)nameForCase:(long long)arg1;
+ (id)testCases;
+ (id)testCasesGrouped;

- (void).cxx_destruct;
- (id)_anyAppIcon;
- (id)_anySUDescriptor;
- (id)_anyUserInstalledAppIcon;
- (void)_dismissCurrentItem;
- (id)_mapsApp;
- (id)_nextAlertItemToTest;
- (id)alertForIndex:(long long)arg1;
- (id)dataPlanAlertItemForCase:(long long)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)recipesToTest;
- (void)setRecipesToTest:(id)arg1;
- (id)title;

@end
