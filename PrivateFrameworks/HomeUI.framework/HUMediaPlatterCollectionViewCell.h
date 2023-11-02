
@interface HUMediaPlatterCollectionViewCell : HUViewControllerCollectionViewCell <HUQuickControlPresentationTransitionDelegate>

@property (nonatomic, readonly) unsigned long long backgroundDisplayStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)backgroundColor;
- (double)backgroundCornerRadius;
- (unsigned long long)backgroundDisplayStyle;
- (id)baseIconViewConfiguration;
- (id)createBackgroundBlurView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconViewTileFrame;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
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
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tileFrame;
- (void)updateUIWithAnimation:(bool)arg1;

@end
