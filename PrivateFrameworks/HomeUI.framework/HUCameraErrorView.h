
@interface HUCameraErrorView : UIStackView <HUCameraErrorViewable> {
    UILabel * _descriptionLabel;
    UIImageView * _imageView;
    UIStackView * _labelStackView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UIStackView *labelStackView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (id)descriptionLabel;
- (id)descriptionText;
- (id)imageView;
- (id)init;
- (id)labelStackView;
- (void)setDescriptionText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleLabel;
- (id)titleText;

@end
