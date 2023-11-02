
@interface AXSpringBoardServerAlertManager : NSObject <AXViewServiceHandler, SBSRemoteAlertHandleObserver> {
    NSMutableDictionary * _handlesByService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *handlesByService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)handlesByService;
- (void)hideAXUIViewService:(id)arg1;
- (bool)isShowingAXUIViewService:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setHandlesByService:(id)arg1;
- (void)showAXUIViewService:(id)arg1 withData:(id)arg2;

@end
