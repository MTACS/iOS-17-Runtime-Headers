
@protocol ASCLockupPresenterView <NSObject>

@required

- (struct CGSize { double x1; double x2; })preferredIconSize;
- (void)setDisplayContext:(ASCLockupDisplayContext *)arg1;
- (void)setHeading:(NSString *)arg1;
- (void)setIconImage:(UIImage *)arg1 withDecoration:(NSString *)arg2;
- (void)setLoading:(bool)arg1;
- (void)setPrefersRightToLeftLayout:(bool)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;

@end
