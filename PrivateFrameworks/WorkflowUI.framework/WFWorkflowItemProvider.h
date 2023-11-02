
@interface WFWorkflowItemProvider : UIActivityItemProvider {
    WFShortcutExporter * _shortcutExporter;
    bool  _shouldShowSuccessCheckmark;
    <WFUserInterfaceHost> * _userInterface;
    WFWorkflow * _workflow;
    NSURL * _workflowURL;
}

@property (nonatomic, retain) WFShortcutExporter *shortcutExporter;
@property (nonatomic) bool shouldShowSuccessCheckmark;
@property (nonatomic, readonly) <WFUserInterfaceHost> *userInterface;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, retain) NSURL *workflowURL;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (void)generateItemURL;
- (bool)hasWorkflowURL;
- (id)initWithWorkflow:(id)arg1 userInterface:(id)arg2 placeholderItem:(id)arg3;
- (id)item;
- (void)setShortcutExporter:(id)arg1;
- (void)setShouldShowSuccessCheckmark:(bool)arg1;
- (void)setWorkflowURL:(id)arg1;
- (id)shareShortcutEventForActivityType:(id)arg1;
- (id)shortcutExporter;
- (bool)shouldShowSuccessCheckmark;
- (id)userInterface;
- (id)workflow;
- (id)workflowURL;

@end
