
@interface AVPlaybackControlsRoutePickerView : AVRoutePickerView <AVPlaybackControlsViewItem> {
    NSString * _currentMicaPackageName;
    AVButton * _customButton;
    bool  _hasAlternateAppearance;
    bool  _hasFullScreenAppearance;
    AVLayoutItemAttributes * _layoutAttributes;
    bool  _removed;
    bool  _secondGenerationButton;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedOrExcluded, nonatomic, readonly) bool collapsedOrExcluded;
@property (nonatomic, retain) NSString *currentMicaPackageName;
@property (nonatomic, readonly) AVButton *customButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } extrinsicContentSize;
@property (nonatomic) bool hasAlternateAppearance;
@property (nonatomic) bool hasFullScreenAppearance;
@property (readonly) unsigned long long hash;
@property (getter=isIncluded, nonatomic) bool included;
@property (nonatomic, readonly) AVLayoutItemAttributes *layoutAttributes;
@property (getter=isRemoved, nonatomic) bool removed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateCustomButtonMicaPackage;
- (void)_updateLayoutItem;
- (id)currentMicaPackageName;
- (id)customButton;
- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (bool)hasAlternateAppearance;
- (bool)hasFullScreenAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSecondGenerationButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isIncluded;
- (bool)isRemoved;
- (id)layoutAttributes;
- (void)layoutAttributesDidChange;
- (void)setCollapsed:(bool)arg1;
- (void)setCurrentMicaPackageName:(id)arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setIncluded:(bool)arg1;
- (void)setPrioritizesVideoDevices:(bool)arg1;
- (void)setRemoved:(bool)arg1;
- (void)updateButtonAppearance;

@end
