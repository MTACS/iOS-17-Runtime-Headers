
@protocol HUSoftwareUpdateUIPresentationDelegate <NSObject>

@required

- (NAFuture *)softwareUpdateUIManager:(HUSoftwareUpdateUIManager *)arg1 dismissViewController:(UIViewController<HUPreloadableViewController> *)arg2;
- (NAFuture *)softwareUpdateUIManager:(HUSoftwareUpdateUIManager *)arg1 presentViewController:(UIViewController<HUPreloadableViewController> *)arg2;

@end
