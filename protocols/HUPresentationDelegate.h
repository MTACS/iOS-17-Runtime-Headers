
@protocol HUPresentationDelegate <NSObject>

@required

- (NAFuture *)finishPresentation:(UIViewController<HUPresentationDelegateHost> *)arg1 animated:(bool)arg2;

@end
