
@interface HUHubUnavailableView : UIView {
    NSString * _accessoryName;
    UILabel * _descriptionLabel;
    NSArray * _layoutConstraints;
    HUIconView * _networkIconView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic, retain) HUIconView *networkIconView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_setupView;
- (id)accessoryName;
- (id)descriptionLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutConstraints;
- (id)networkIconView;
- (void)setAccessoryName:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setNetworkIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)updateConstraints;

@end
