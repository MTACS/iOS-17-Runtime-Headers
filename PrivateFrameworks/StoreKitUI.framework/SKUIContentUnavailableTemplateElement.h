
@interface SKUIContentUnavailableTemplateElement : SKUIViewElement

@property (nonatomic, readonly) SKUIButtonViewElement *button;
@property (nonatomic, readonly) SKUIImageViewElement *image;
@property (nonatomic, readonly) SKUILabelViewElement *messageLabel;
@property (nonatomic, readonly) SKUILabelViewElement *titleLabel;

- (id)button;
- (id)image;
- (id)messageLabel;
- (long long)pageComponentType;
- (id)titleLabel;

@end
