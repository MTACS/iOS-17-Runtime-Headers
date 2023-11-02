
@interface AVTAvatarAttributeEditorSectionColorDataSource : NSObject {
    AVTAvatarAttributeEditorColorSection * _colorSection;
    <AVTAvatarAttributeEditorSectionColorDataSourceDelegate> * _delegate;
    long long  _displayMode;
    long long  _selectedExtendedColorIndex;
    long long  _selectedPrimaryColorIndex;
}

@property (nonatomic, retain) AVTAvatarAttributeEditorColorSection *colorSection;
@property (nonatomic) <AVTAvatarAttributeEditorSectionColorDataSourceDelegate> *delegate;
@property (nonatomic) long long displayMode;
@property (nonatomic, readonly) bool isShowingExtended;
@property (nonatomic, readonly) bool isShowingSlider;
@property (nonatomic) long long selectedExtendedColorIndex;
@property (nonatomic, readonly) long long selectedItemIndex;
@property (nonatomic) long long selectedPrimaryColorIndex;

+ (long long)indexOfItem:(id)arg1 inItems:(id)arg2;
+ (id)selectedItemFromItems:(id)arg1;

- (void).cxx_destruct;
- (id)colorSection;
- (id)delegate;
- (long long)displayMode;
- (id)indexPathOfExtendedIcon;
- (id)init;
- (bool)isShowingExtended;
- (bool)isShowingSlider;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)resetToDefaultDisplayMode;
- (id)sectionItemAtIndex:(long long)arg1;
- (void)selectSectionItemAtIndexPath:(id)arg1;
- (long long)selectedExtendedColorIndex;
- (long long)selectedItemIndex;
- (long long)selectedPrimaryColorIndex;
- (void)setColorSection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setSelectedExtendedColorIndex:(long long)arg1;
- (void)setSelectedPrimaryColorIndex:(long long)arg1;
- (void)toggleExtendedMode;
- (void)toggleSliderMode;
- (void)updateSelectedIndexesSelectingItem:(id)arg1 fromUserInteraction:(bool)arg2;

@end
