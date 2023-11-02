
@interface HUEmbeddedTriggerActionSetGridViewController : HomeUI.EmbeddedActionSetContainerSummaryGridViewController <HUTriggerSummaryActionGridViewControllerProtocol> {
    void delegate;
    void triggerBuilder;
}

@property (nonatomic) <HUEmbeddedTriggerActionSetGridViewControllerDelegate> *delegate;
@property (nonatomic, retain) id triggerBuilder;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithTriggerBuilder:(id)arg1;
- (void)reloadActions;
- (void)sceneEditor:(id)arg1 removeActionSetBuilderFromTrigger:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setTriggerBuilder:(id)arg1;
- (id)triggerBuilder;

@end
