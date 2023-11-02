
@interface AppStoreKitInternal.SheetEngagementManager : NSObject <AMSEngagementObserver> {
    void engagement;
    void objectGraph;
    void presentationWindow;
}

- (void).cxx_destruct;
- (void)engagement:(id)arg1 didUpdateEngagementRequest:(id)arg2 placement:(id)arg3 serviceType:(id)arg4 completion:(id /* block */)arg5;
- (void)engagement:(id)arg1 didUpdateRequest:(id)arg2 placement:(id)arg3 serviceType:(id)arg4;
- (void)engagement:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)engagement:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)init;

@end
