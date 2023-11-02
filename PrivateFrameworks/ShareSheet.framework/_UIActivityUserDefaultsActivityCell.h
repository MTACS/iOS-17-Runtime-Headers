
@interface _UIActivityUserDefaultsActivityCell : UITableViewCell {
    UIView * _activityImageSlotView;
    UIImageView * _activityImageView;
    _UIUserDefaultsActivityProxy * _activityProxy;
    UILabel * _activityTitleLabel;
    UIView * _activityTitleView;
    bool  _disabled;
    NSLayoutConstraint * _imageViewLeadingConstraint;
    NSLayoutConstraint * _imageViewWidthConstraint;
    NSLayoutConstraint * _labelLeadingConstraint;
    unsigned long long  _sequence;
    NSLayoutConstraint * _titleLabelHeightAnchor;
}

@property (nonatomic, retain) UIView *activityImageSlotView;
@property (nonatomic, retain) UIImageView *activityImageView;
@property (nonatomic, retain) _UIUserDefaultsActivityProxy *activityProxy;
@property (nonatomic, retain) UILabel *activityTitleLabel;
@property (nonatomic, retain) UIView *activityTitleView;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, retain) NSLayoutConstraint *imageViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *imageViewWidthConstraint;
@property (nonatomic, retain) NSLayoutConstraint *labelLeadingConstraint;
@property (nonatomic) unsigned long long sequence;

+ (id)bodyShortFont;

- (void).cxx_destruct;
- (void)_updateImageDarkening;
- (id)activityImageSlotView;
- (id)activityImageView;
- (id)activityProxy;
- (id)activityTitleLabel;
- (id)activityTitleView;
- (id)imageViewLeadingConstraint;
- (id)imageViewWidthConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (id)labelLeadingConstraint;
- (void)prepareForReuse;
- (unsigned long long)sequence;
- (void)setActivityImageSlotView:(id)arg1;
- (void)setActivityImageView:(id)arg1;
- (void)setActivityProxy:(id)arg1;
- (void)setActivityTitleLabel:(id)arg1;
- (void)setActivityTitleView:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setImageViewLeadingConstraint:(id)arg1;
- (void)setImageViewWidthConstraint:(id)arg1;
- (void)setLabelLeadingConstraint:(id)arg1;
- (void)setSequence:(unsigned long long)arg1;

@end
