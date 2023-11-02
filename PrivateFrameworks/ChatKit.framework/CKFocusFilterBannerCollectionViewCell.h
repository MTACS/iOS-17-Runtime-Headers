
@interface CKFocusFilterBannerCollectionViewCell : UICollectionViewCell {
    NSLayoutConstraint * _bottomKeylineHeightConstraint;
    UIView * _bottomKeylineView;
    <CKFocusFilterBannerDelegate> * _focusFilterBannerDelegate;
    UILabel * _focusFilterStateDescriptionLabel;
    UIButton * _focusFilterToggleButton;
    bool  _isFocusFilterEnabled;
    NSArray * _keylineAlignmentConstraints;
    NSArray * _sizeClassDependentConstraints;
    NSLayoutConstraint * _topKeylineHeightConstraint;
    UIView * _topKeylineView;
    bool  _useFullWidthKeylines;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomKeylineHeightConstraint;
@property (nonatomic, retain) UIView *bottomKeylineView;
@property (nonatomic) <CKFocusFilterBannerDelegate> *focusFilterBannerDelegate;
@property (nonatomic, retain) UILabel *focusFilterStateDescriptionLabel;
@property (nonatomic, retain) UIButton *focusFilterToggleButton;
@property (nonatomic) bool isFocusFilterEnabled;
@property (nonatomic, retain) NSArray *keylineAlignmentConstraints;
@property (nonatomic, retain) NSArray *sizeClassDependentConstraints;
@property (nonatomic, retain) NSLayoutConstraint *topKeylineHeightConstraint;
@property (nonatomic, retain) UIView *topKeylineView;
@property (nonatomic) bool useFullWidthKeylines;

+ (bool)_showsKeyline;
+ (id)itemIdentifier;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_focusFilterToggleButtonSelected:(id)arg1;
- (void)_updateFilterToggleButtonConfiguration;
- (void)_updateKeylineAlignmentConstraints;
- (void)_updateKeylineHeightConstraints;
- (void)_updateSizeClassDependentConstraints;
- (void)_updateTitle;
- (id)bottomKeylineHeightConstraint;
- (id)bottomKeylineView;
- (void)contentSizeCategoryDidChange;
- (id)focusFilterBannerDelegate;
- (id)focusFilterStateDescriptionLabel;
- (id)focusFilterToggleButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFocusFilterEnabled;
- (id)keylineAlignmentConstraints;
- (void)setBottomKeylineHeightConstraint:(id)arg1;
- (void)setBottomKeylineView:(id)arg1;
- (void)setFocusFilterBannerDelegate:(id)arg1;
- (void)setFocusFilterStateDescriptionLabel:(id)arg1;
- (void)setFocusFilterToggleButton:(id)arg1;
- (void)setIsFocusFilterEnabled:(bool)arg1;
- (void)setKeylineAlignmentConstraints:(id)arg1;
- (void)setSizeClassDependentConstraints:(id)arg1;
- (void)setTopKeylineHeightConstraint:(id)arg1;
- (void)setTopKeylineView:(id)arg1;
- (void)setUseFullWidthKeylines:(bool)arg1;
- (id)sizeClassDependentConstraints;
- (id)topKeylineHeightConstraint;
- (id)topKeylineView;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useFullWidthKeylines;

@end
