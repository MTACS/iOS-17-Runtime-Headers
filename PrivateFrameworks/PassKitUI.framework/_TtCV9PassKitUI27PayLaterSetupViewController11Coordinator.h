
@interface _TtCV9PassKitUI27PayLaterSetupViewController11Coordinator : NSObject <PKPayLaterSetupFlowControllerDelegate> {
    void changeFundingModeTabAction;
    void controllerContext;
    void didFinishAction;
    void didSelectAction;
    void parent;
}

- (void).cxx_destruct;
- (id)init;
- (void)payLaterSetupFlowController:(id)arg1 didSelect:(id)arg2;
- (void)payLaterSetupFlowController:(id)arg1 didTerminateApplicationState:(unsigned long long)arg2;
- (void)payLaterSetupFlowControllerDidFinish:(id)arg1;

@end
