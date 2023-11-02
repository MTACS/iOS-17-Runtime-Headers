
@interface NewsUI2.ChannelUpsellHandler : NSObject <SXPostActionHandler> {
    void configurationManager;
    void dateProvider;
    void lazyKeyValueStore;
    void localTracker;
    void paidAccessChecker;
    void postActionHandlerManager;
    void pptContext;
    void purchaseController;
    void router;
    void sceneProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  triggerRecord;
    void upsellCancellationClosure;
    void upsellShareClosure;
}

- (void).cxx_destruct;
- (void)handledAction:(id)arg1 state:(unsigned long long)arg2;
- (id)init;

@end
