
@interface HUGridStatusCell : UICollectionViewCell <HUGridCellProtocol, HUQuickControlPresentationTransitionDelegate> {
    void areCellContentsHidden;
    void item;
    void layoutOptions;
}

@property (nonatomic, readonly) unsigned long long backgroundDisplayStyle;
@property (nonatomic) bool cellContentsHidden;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) HUGridCellLayoutOptions *layoutOptions;

+ (Class)layoutOptionsClass;

- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (bool)areCellContentsHidden;
- (double)backgroundCornerRadius;
- (unsigned long long)backgroundDisplayStyle;
- (id)baseIconViewConfiguration;
- (id)createBackgroundBlurView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconViewTileFrame;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (id)layoutOptions;
- (id)prefixLabelFont;
- (id)prefixLabelTextColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })prefixLabelTileFrame;
- (id)prefixString;
- (void)prepareForReuse;
- (id)primaryLabelFont;
- (id)primaryLabelTextColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primaryLabelTileFrame;
- (id)primaryString;
- (bool)recognizeDoubleClickGesture;
- (id)secondaryAttributedString;
- (id)secondaryLabelFont;
- (id)secondaryLabelTextColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })secondaryLabelTileFrame;
- (id)secondaryString;
- (void)setCellContentsHidden:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tileFrame;
- (void)updateUIWithAnimation:(bool)arg1;

@end
