
@interface PXGPPTSettings : PXSettings {
    long long  _numberOfColumns;
    long long  _numberOfItems;
    long long  _numberOfSections;
    long long  _selectionDecorationStlye;
    bool  _shouldTestNestedScrollView;
    bool  _useAssetBadgeDecoration;
    bool  _useMultipleScrollableRows;
}

@property (nonatomic) long long numberOfColumns;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long numberOfSections;
@property (nonatomic) long long selectionDecorationStlye;
@property (nonatomic) bool shouldTestNestedScrollView;
@property (nonatomic) bool useAssetBadgeDecoration;
@property (nonatomic) bool useMultipleScrollableRows;

+ (id)allPresetNames;
+ (id)scrollingPresetNames;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)createLayout;
- (long long)numberOfColumns;
- (long long)numberOfItems;
- (long long)numberOfSections;
- (id)parentSettings;
- (long long)selectionDecorationStlye;
- (void)setDefaultValues;
- (void)setDefaultValuesWithPresetName:(id)arg1;
- (void)setNumberOfColumns:(long long)arg1;
- (void)setNumberOfItems:(long long)arg1;
- (void)setNumberOfSections:(long long)arg1;
- (void)setSelectionDecorationStlye:(long long)arg1;
- (void)setShouldTestNestedScrollView:(bool)arg1;
- (void)setUseAssetBadgeDecoration:(bool)arg1;
- (void)setUseMultipleScrollableRows:(bool)arg1;
- (bool)shouldTestNestedScrollView;
- (bool)useAssetBadgeDecoration;
- (bool)useMultipleScrollableRows;

@end
