
@interface AKAuthorizationScopeDetailTableViewCell : UITableViewCell {
    bool  _internalChecked;
    unsigned long long  _internalCheckmarkStyle;
    UIImageView * _leadingCheckmarkView;
    UILabel * _mainDetailLabel;
    UILayoutGuide * _mainGuide;
    UILabel * _mainLabel;
    UILayoutGuide * _mainLabelFirstLineGuide;
    NSLayoutConstraint * _mainLabelLeadingConstraint;
    NSLayoutConstraint * _minimumHeightConstraint;
    UIImage * _scopeImage;
    UIImageView * _scopeImageView;
    UILabel * _scopeLabel;
    UILayoutGuide * _scopeLabelFirstLineGuide;
}

@property (getter=isChecked, nonatomic) bool checked;
@property (nonatomic) unsigned long long checkmarkStyle;
@property (getter=internalIsChecked, nonatomic) bool internalChecked;
@property (nonatomic) unsigned long long internalCheckmarkStyle;
@property (nonatomic, retain) UIImageView *leadingCheckmarkView;
@property (nonatomic, readonly) UILabel *mainDetailLabel;
@property (nonatomic, readonly) UILayoutGuide *mainGuide;
@property (nonatomic, readonly) UILabel *mainLabel;
@property (nonatomic, readonly) UILayoutGuide *mainLabelFirstLineGuide;
@property (nonatomic, readonly) NSLayoutConstraint *mainLabelLeadingConstraint;
@property (nonatomic) double minimumHeight;
@property (nonatomic, readonly) NSLayoutConstraint *minimumHeightConstraint;
@property (nonatomic, retain) UIImage *scopeImage;
@property (nonatomic, retain) UIImageView *scopeImageView;
@property (nonatomic, readonly) UILabel *scopeLabel;
@property (nonatomic, readonly) UILayoutGuide *scopeLabelFirstLineGuide;

- (void).cxx_destruct;
- (id)_checkmarkCircleImage;
- (id)_checkmarkCircleImageViewChecked:(bool)arg1;
- (id)_checkmarkImage;
- (id)_checkmarkImageView;
- (id)_circleImage;
- (id)_clearImage;
- (bool)_isLTR;
- (id)_newLabel;
- (id)_selectedCheckmarkCircleImageView;
- (void)_setCheckMarkStyleLeadingChecked:(bool)arg1;
- (void)_setCheckmarkStyleTrailingChecked:(bool)arg1;
- (void)_setSeparatorIndentToMainLabel;
- (void)_setupLayout;
- (void)_setupScopeImageView;
- (void)_setupViews;
- (id)_unselectedCheckmarkCircleImageView;
- (unsigned long long)checkmarkStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (unsigned long long)internalCheckmarkStyle;
- (bool)internalIsChecked;
- (bool)isChecked;
- (void)layoutSubviews;
- (id)leadingCheckmarkView;
- (id)mainDetailLabel;
- (id)mainGuide;
- (id)mainLabel;
- (id)mainLabelFirstLineGuide;
- (id)mainLabelLeadingConstraint;
- (double)minimumHeight;
- (id)minimumHeightConstraint;
- (id)scopeImage;
- (id)scopeImageView;
- (id)scopeLabel;
- (id)scopeLabelFirstLineGuide;
- (void)setChecked:(bool)arg1;
- (void)setCheckmarkStyle:(unsigned long long)arg1;
- (void)setInternalChecked:(bool)arg1;
- (void)setInternalCheckmarkStyle:(unsigned long long)arg1;
- (void)setLeadingCheckmarkView:(id)arg1;
- (void)setMinimumHeight:(double)arg1;
- (void)setScopeImage:(id)arg1;
- (void)setScopeImageView:(id)arg1;

@end
