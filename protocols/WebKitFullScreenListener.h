
@protocol WebKitFullScreenListener <NSObject>

@required

- (void)webkitDidEnterFullScreen;
- (void)webkitDidExitFullScreen;
- (void)webkitWillEnterFullScreen;
- (void)webkitWillExitFullScreen;

@end
