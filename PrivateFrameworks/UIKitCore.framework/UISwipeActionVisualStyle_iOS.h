
@interface UISwipeActionVisualStyle_iOS : NSObject <UISwipeActionVisualStyle>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) UIColor *defaultButtonBackgroundColor;
@property (nonatomic, readonly) double defaultButtonWidth;
@property (nonatomic, readonly) unsigned long long defaultCollectionViewCompositionalLayoutSwipeStyle;
@property (nonatomic, readonly) UIColor *defaultTintColor;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double horizontalPadding;
@property (nonatomic, readonly) double iconToTitleSpacing;
@property (nonatomic, readonly) double maxButtonWidth;
@property (nonatomic, readonly) double maxFontSize;
@property (nonatomic, readonly) unsigned long long maxLines;
@property (nonatomic, readonly) double minFontSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double titleFontWeight;

- (double)buttonCornerRadiusForStyle:(unsigned long long)arg1 view:(id)arg2;
- (id)defaultButtonBackgroundColor;
- (double)defaultButtonWidth;
- (unsigned long long)defaultCollectionViewCompositionalLayoutSwipeStyle;
- (double)defaultContentHeightForView:(id)arg1;
- (unsigned long long)defaultSwipeActionUIStyleForUITableViewStyle:(long long)arg1;
- (id)defaultTintColor;
- (double)horizontalPadding;
- (double)iconToTitleSpacing;
- (double)interButtonPaddingForStyle:(unsigned long long)arg1;
- (double)interitemButtonCornerRadiusForStyle:(unsigned long long)arg1;
- (double)maxButtonWidth;
- (double)maxFontSize;
- (unsigned long long)maxLines;
- (double)minFontSize;
- (double)paddingToSwipeViewForStyle:(unsigned long long)arg1;
- (double)titleFontWeight;

@end
