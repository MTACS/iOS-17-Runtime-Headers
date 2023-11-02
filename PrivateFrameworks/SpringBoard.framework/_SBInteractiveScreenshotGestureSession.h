
@interface _SBInteractiveScreenshotGestureSession : NSObject {
    SBInteractiveScreenshotGestureHostWindow * _hostWindow;
    SBInteractiveScreenshotGestureRootWindow * _rootWindow;
    NSUUID * _sessionID;
}

@property (nonatomic, readonly) SBInteractiveScreenshotGestureHostRootViewController *hostRootViewController;
@property (nonatomic, retain) SBInteractiveScreenshotGestureHostWindow *hostWindow;
@property (nonatomic, readonly) SBInteractiveScreenshotGestureRootViewController *rootViewController;
@property (nonatomic, retain) SBInteractiveScreenshotGestureRootWindow *rootWindow;
@property (nonatomic, readonly, copy) NSUUID *sessionID;

- (void).cxx_destruct;
- (id)hostRootViewController;
- (id)hostWindow;
- (id)initWithSessionID:(id)arg1;
- (id)rootViewController;
- (id)rootWindow;
- (id)sessionID;
- (void)setHostWindow:(id)arg1;
- (void)setRootWindow:(id)arg1;

@end
