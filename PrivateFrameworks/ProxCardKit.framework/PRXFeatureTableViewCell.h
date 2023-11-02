
@interface PRXFeatureTableViewCell : UITableViewCell {
    double  _featureImageSize;
    UIView * _featureImageView;
    bool  _hidingSeparator;
    NSLayoutConstraint * _imageViewLeadingAnchor;
    NSLayoutConstraint * _imageViewVerticalAnchor;
    NSLayoutConstraint * _layoutGuideHeightConstraint;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    UISwitch * _switchControl;
    NSString * _title;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelLeadingAnchor;
    NSLayoutConstraint * _titleLabelTrailingAnchor;
}

@property (nonatomic) double featureImageSize;
@property (nonatomic, retain) UIView *featureImageView;
@property (getter=isHidingSeparator, nonatomic) bool hidingSeparator;
@property (nonatomic, retain) NSLayoutConstraint *imageViewLeadingAnchor;
@property (nonatomic, retain) NSLayoutConstraint *imageViewVerticalAnchor;
@property (nonatomic, readonly) NSLayoutConstraint *layoutGuideHeightConstraint;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, retain) UISwitch *switchControl;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelLeadingAnchor;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelTrailingAnchor;

- (void).cxx_destruct;
- (void)_updateImageViewAnchors;
- (void)_updateLabelHyphenationFactor;
- (void)_updateTitleIndent;
- (void)_updateTitleLeadingAnchor;
- (double)featureImageSize;
- (id)featureImageView;
- (id)imageViewLeadingAnchor;
- (id)imageViewVerticalAnchor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isHidingSeparator;
- (id)layoutGuideHeightConstraint;
- (void)layoutMarginsDidChange;
- (void)setFeatureImageSize:(double)arg1;
- (void)setFeatureImageView:(id)arg1;
- (void)setHidingSeparator:(bool)arg1;
- (void)setImageViewLeadingAnchor:(id)arg1;
- (void)setImageViewVerticalAnchor:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSwitchControl:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabelLeadingAnchor:(id)arg1;
- (void)setTitleLabelTrailingAnchor:(id)arg1;
- (id)subtitle;
- (id)subtitleLabel;
- (id)switchControl;
- (id)title;
- (id)titleLabel;
- (id)titleLabelLeadingAnchor;
- (id)titleLabelTrailingAnchor;
- (void)traitCollectionDidChange:(id)arg1;

@end
