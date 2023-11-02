
@interface PassKitUI.HeadUnitPairingFlowItem : NSObject <CARSetupHeadUnitPairingPromptDelegate, PRXFlowDelegate> {
    void context;
    void delegate;
    void hupPrompt;
    void identifier;
    void presentationConfiguration;
}

- (void).cxx_destruct;
- (void)headUnitPairingPrompt:(id)arg1 didFinishWithResult:(bool)arg2;
- (id)init;
- (void)proxCardFlowDidDismiss;

@end
