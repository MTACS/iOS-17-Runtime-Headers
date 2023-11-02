
@interface AXRemoteUIAlertCallbackHolder : NSObject {
    id /* block */  _dismissalHandler;
    id /* block */  _presentationHandler;
    SBSRemoteAlertHandle * _remoteAlertHandle;
}

@property (nonatomic, copy) id /* block */ dismissalHandler;
@property (nonatomic, copy) id /* block */ presentationHandler;
@property (nonatomic, retain) SBSRemoteAlertHandle *remoteAlertHandle;

- (void).cxx_destruct;
- (id /* block */)dismissalHandler;
- (id /* block */)presentationHandler;
- (id)remoteAlertHandle;
- (void)setDismissalHandler:(id /* block */)arg1;
- (void)setPresentationHandler:(id /* block */)arg1;
- (void)setRemoteAlertHandle:(id)arg1;

@end
