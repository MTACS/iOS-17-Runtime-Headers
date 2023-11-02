
@interface PassKitUI.UIFlowManager : NSObject <PKUIFlowManagerRendererDelegate> {
    void activeNode;
    void completion;
    void inflightRenderersBeingPresented;
    void isPerformingMutation;
    void onViewLoaded;
    void resultHandler;
    void root;
}

- (void).cxx_destruct;
- (id)init;
- (void)rendererDidDisappearWithRenderer:(id)arg1;
- (void)rendererDidRunOutOfContentWithRenderer:(id)arg1;

@end
