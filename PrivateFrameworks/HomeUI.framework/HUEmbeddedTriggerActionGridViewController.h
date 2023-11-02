
@interface HUEmbeddedTriggerActionGridViewController : HomeUI.EmbeddedActionGridViewController <HUTriggerSummaryActionGridViewControllerProtocol> {
    void triggerActionGridDelegate;
    void triggerBuilder;
}

@property (nonatomic) <HUEmbeddedTriggerActionGridViewControllerDelegate> *triggerActionGridDelegate;
@property (nonatomic, retain) id triggerBuilder;

- (void).cxx_destruct;
- (id)initWithTriggerBuilder:(id)arg1;
- (void)reloadActions;
- (void)setTriggerActionGridDelegate:(id)arg1;
- (void)setTriggerBuilder:(id)arg1;
- (id)triggerActionGridDelegate;
- (id)triggerBuilder;

@end
