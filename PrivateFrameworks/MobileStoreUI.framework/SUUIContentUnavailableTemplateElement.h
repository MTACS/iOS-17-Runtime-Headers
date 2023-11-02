
@interface SUUIContentUnavailableTemplateElement : SUUIViewElement

@property (nonatomic, readonly) SUUIButtonViewElement *button;
@property (nonatomic, readonly) SUUIImageViewElement *image;
@property (nonatomic, readonly) SUUILabelViewElement *messageLabel;
@property (nonatomic, readonly) SUUILabelViewElement *titleLabel;

- (id)button;
- (id)image;
- (id)messageLabel;
- (long long)pageComponentType;
- (id)titleLabel;

@end
