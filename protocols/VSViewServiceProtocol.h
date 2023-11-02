
@protocol VSViewServiceProtocol <NSObject>

@required

- (void)_performRequest:(VSViewServiceRequest *)arg1 withIdentifier:(NSUUID *)arg2;
- (void)_viewControllerWasDismissed;

@end
