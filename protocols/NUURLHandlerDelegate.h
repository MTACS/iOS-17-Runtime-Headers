
@protocol NUURLHandlerDelegate <NSObject>

@required

- (void)URLHandler:(NUURLHandler *)arg1 wantsToPresentViewController:(UIViewController *)arg2 animated:(bool)arg3;
- (void)URLHandler:(NUURLHandler *)arg1 willOpenURL:(NSURL *)arg2;

@end
