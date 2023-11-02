
@protocol MUDisclosureActionViewModelProviding <NSObject>

@required

- (id /* block */)actionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, UIView *, void*, id, SEL
- (UIImage *)image;
- (UIColor *)imageTintColor;
- (void)setActionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIView *, void*
- (void)setImage:(UIImage *)arg1;
- (void)setImageTintColor:(UIColor *)arg1;
- (void)setTitleString:(NSString *)arg1;
- (NSString *)titleString;

@end
