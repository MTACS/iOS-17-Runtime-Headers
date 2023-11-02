
@protocol SWWebViewConfigurationFactory <NSObject>

@required

- (WKWebViewConfiguration *)createWebViewConfigurationWithUserContentController:(WKUserContentController *)arg1 mediaSettings:(SWMediaSettings *)arg2;

@end
