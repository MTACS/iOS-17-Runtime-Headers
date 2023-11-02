
@interface ICQRemotePresentationManager : NSObject <SBSRemoteAlertHandleObserver> {
    id /* block */  _presentationWasInvalidated;
    ICQRemoteContext * _remoteContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ presentationWasInvalidated;
@property (nonatomic, readonly) ICQRemoteContext *remoteContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRemoteContext:(id)arg1;
- (void)presentHiddenFreshmintFlowWithEndpoint:(id)arg1;
- (id /* block */)presentationWasInvalidated;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (id)remoteContext;
- (void)setPresentationWasInvalidated:(id /* block */)arg1;

@end
