
@protocol PKInterceptableActivityViewControllerDelegate <NSObject>

@required

- (void)interceptableActivityViewController:(PKInterceptableActivityViewController *)arg1 didFinishWithShare:(bool)arg2;
- (void)interceptableActivityViewController:(PKInterceptableActivityViewController *)arg1 didInterceptActivitySelectionOfType:(NSString *)arg2;
- (bool)interceptableActivityViewController:(PKInterceptableActivityViewController *)arg1 shouldInterceptActivitySelectionOfType:(NSString *)arg2;

@end
