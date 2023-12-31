
@protocol IAMWebMessageControllerDelegate <NSObject>

@optional

- (void)webMessageControllerWebViewDidReportEvent:(IAMWebMessageController *)arg1 event:(NSDictionary *)arg2;
- (void)webMessageControllerWebViewDidRequestAction:(IAMWebMessageController *)arg1 actionConfiguration:(NSDictionary *)arg2 options:(NSDictionary *)arg3;
- (void)webMessageControllerWebViewDidRequestClose:(IAMWebMessageController *)arg1;
- (void)webMessageControllerWebViewDidRequestOpenURL:(IAMWebMessageController *)arg1 url:(NSURL *)arg2 options:(NSDictionary *)arg3;

@end
