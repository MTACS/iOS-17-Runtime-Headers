
@interface RUICustomImageTableViewCell : RemoteUITableViewCell {
    UIImageView * _customImageViewInternal;
    UILabel * _customTextLabelInternal;
    UIStackView * _stackView;
}

@property (nonatomic, readonly) UIImageView *customImageView;
@property (nonatomic, retain) UIImageView *customImageViewInternal;
@property (nonatomic, readonly) UILabel *customTextLabel;
@property (nonatomic, retain) UILabel *customTextLabelInternal;
@property (nonatomic, retain) UIStackView *stackView;

- (void).cxx_destruct;
- (id)_customImageViewInternal;
- (id)_customTextLabelInternal;
- (void)_initializeViews;
- (id)customImageView;
- (id)customImageViewInternal;
- (id)customTextLabel;
- (id)customTextLabelInternal;
- (void)setCustomImageViewInternal:(id)arg1;
- (void)setCustomTextLabelInternal:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;

@end
