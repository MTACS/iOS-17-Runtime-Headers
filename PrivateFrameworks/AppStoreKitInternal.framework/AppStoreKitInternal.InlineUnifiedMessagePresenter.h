
@interface AppStoreKitInternal.InlineUnifiedMessagePresenter : NSObject <AMSEngagementObserver, AMSUIMessageViewControllerDelegate> {
    void actionHandler;
    void engagement;
    void inlineViewControllers;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  metricsPipeline;
    void objectGraph;
    void onRecievedRequestToHideUnifiedMessage;
    void onRecievedRequestToShowUnifiedMessage;
}

- (void).cxx_destruct;
- (void)engagement:(id)arg1 didUpdateEngagementRequest:(id)arg2 placement:(id)arg3 serviceType:(id)arg4 completion:(id /* block */)arg5;
- (void)engagement:(id)arg1 didUpdateRequest:(id)arg2 placement:(id)arg3 serviceType:(id)arg4;
- (void)engagement:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)engagement:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize { double x1; double x2; })arg2;
- (void)messageViewController:(id)arg1 enqueueEventWithFields:(id)arg2 inTopic:(id)arg3;

@end
