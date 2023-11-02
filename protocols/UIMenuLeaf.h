
@protocol UIMenuLeaf <NSObject>

@required

- (unsigned long long)attributes;
- (NSString *)discoverabilityTitle;
- (UIImage *)image;
- (void)performWithSender:(id)arg1 target:(id)arg2;
- (<UIPopoverPresentationControllerSourceItem> *)presentationSourceItem;
- (UIImage *)selectedImage;
- (id)sender;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setDiscoverabilityTitle:(NSString *)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)setSelectedImage:(UIImage *)arg1;
- (void)setState:(long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (long long)state;
- (NSString *)title;

@end
