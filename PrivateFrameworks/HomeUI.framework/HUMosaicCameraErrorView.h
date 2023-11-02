
@interface HUMosaicCameraErrorView : UIView <HUCameraErrorViewable> {
    NSMutableArray * _constraints;
    UILabel * _descriptionLabel;
    UIImageView * _imageView;
    UIStackView * _labelStackView;
    HUMosaicCameraCellLayoutOptions * _layoutOptions;
    UILabel * _titleLabel;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) NSMutableArray *constraints;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UIStackView *labelStackView;
@property (nonatomic, retain) HUMosaicCameraCellLayoutOptions *layoutOptions;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;
@property (nonatomic) bool visualEffectViewHidden;

- (void).cxx_destruct;
- (id)constraints;
- (id)descriptionLabel;
- (id)descriptionText;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelStackView;
- (id)layoutOptions;
- (void)layoutSubviews;
- (void)setConstraints:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setVisualEffectViewHidden:(bool)arg1;
- (id)titleLabel;
- (id)titleText;
- (id)visualEffectView;
- (bool)visualEffectViewHidden;

@end
