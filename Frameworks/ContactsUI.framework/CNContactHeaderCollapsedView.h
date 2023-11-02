
@interface CNContactHeaderCollapsedView : CNContactHeaderView {
    CNContactActionsContainerView * _actionsWrapperView;
    NSString * _alternateName;
    CAGradientLayer * _backgroundGradientLayer;
    CNContactFormatter * _contactFormatter;
    UIView * _gradientLayerContainerView;
    double  _labelsHeight;
    bool  _usesBrandedCallFormat;
}

@property (nonatomic, retain) CNContactActionsContainerView *actionsWrapperView;
@property (nonatomic, retain) NSString *alternateName;
@property (nonatomic, retain) CAGradientLayer *backgroundGradientLayer;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) UIView *gradientLayerContainerView;
@property (nonatomic) double labelsHeight;
@property (nonatomic) bool usesBrandedCallFormat;

+ (id)collapsedContactHeaderViewWithContact:(id)arg1 showingNavBar:(bool)arg2 monogramOnly:(bool)arg3 delegate:(id)arg4;
+ (id)makePhotoViewWithShouldAllowTakePhotoAction:(bool)arg1 shouldAllowImageDrops:(bool)arg2 monogramOnly:(bool)arg3;
+ (id)sizeAttributesShowingNavBar:(bool)arg1;

- (void).cxx_destruct;
- (id)_headerStringForContacts:(id)arg1;
- (void)_updatePhotoView;
- (id)actionsWrapperView;
- (id)alternateName;
- (void)assignImageColorsToAvatarBackgroundView:(id)arg1 horizontal:(bool)arg2;
- (unsigned long long)avatarStyle;
- (id)backgroundGradientLayer;
- (void)calculateLabelSizes;
- (void)calculateLabelSizesIfNeeded;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contactFormatter;
- (void)copy:(id)arg1;
- (void)didFinishUsing;
- (void)disablePhotoTapGesture;
- (id)gradientLayerContainerView;
- (double)height;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 showingNavBar:(bool)arg3 monogramOnly:(bool)arg4 delegate:(id)arg5;
- (double)labelsHeight;
- (void)layoutSubviews;
- (double)maxHeight;
- (double)minHeight;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (void)setActionsWrapperView:(id)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAvatarStyle:(unsigned long long)arg1;
- (void)setBackgroundGradientLayer:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setDefaultLabelColors;
- (void)setGradientLayerContainerView:(id)arg1;
- (void)setLabelsHeight:(double)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setUpNameLabel;
- (void)setUsesBrandedCallFormat:(bool)arg1;
- (void)setupBackgroundGradientLayer;
- (void)showLabelAndAvatar:(bool)arg1 animated:(bool)arg2;
- (void)updateBackgroundWithGradientColors:(id)arg1 horizontal:(bool)arg2;
- (void)updateBackgroundWithPosterSnapshotImage:(id)arg1;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updateLabelColorsForImageColors:(id)arg1;
- (void)updateSizeDependentAttributes;
- (bool)usesBrandedCallFormat;

@end
