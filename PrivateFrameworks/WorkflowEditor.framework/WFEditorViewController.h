
@interface WFEditorViewController : UIViewController <WFEditorHostingViewControllerDelegate> {
    WFContextualActionSuggester * _actionSuggester;
    <WFEditorAuxiliaryViewPresenter> * _auxiliaryViewPresenter;
    <WFEditorViewControllerDelegate> * _delegate;
    WFEditorHostingViewController * _hostingViewController;
    WFWorkflow * _workflow;
}

@property (nonatomic, readonly) double actionCanvasWidth;
@property (nonatomic, retain) WFContextualActionSuggester *actionSuggester;
@property (nonatomic) <WFEditorAuxiliaryViewPresenter> *auxiliaryViewPresenter;
@property (nonatomic) bool canShowEmptyState;
@property (nonatomic) bool canShowInputAction;
@property (nonatomic) <WFEditorViewControllerDelegate> *delegate;
@property (getter=isEditable, nonatomic) bool editable;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly) WFEditorHostingViewController *hostingViewController;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic) Class triggerInputType;
@property (nonatomic, readonly) WFWorkflow *workflow;

- (void).cxx_destruct;
- (double)actionCanvasWidth;
- (id)actionSuggester;
- (void)actionsDidChangeInEditorHostingViewController:(id)arg1;
- (void)appendAction:(id)arg1;
- (id)auxiliaryViewPresenter;
- (bool)canShowEmptyState;
- (bool)canShowInputAction;
- (id)contentScrollViewForEdge:(unsigned long long)arg1;
- (id)delegate;
- (void)editorHostingViewController:(id)arg1 didChangeRunningState:(bool)arg2 fractionCompleted:(double)arg3 isWaiting:(bool)arg4;
- (void)editorHostingViewController:(id)arg1 didChangeVariablePickingState:(bool)arg2;
- (void)editorHostingViewControllerDidFinishRunning:(id)arg1 cancelled:(bool)arg2;
- (id)home;
- (id)hostingViewController;
- (id)initWithWorkflow:(id)arg1;
- (bool)isEditable;
- (bool)isRunning;
- (void)loadView;
- (void)performScrollingTest:(id)arg1;
- (void)reportSuggestionSessionEnded;
- (void)runWithSource:(id)arg1;
- (void)scrollToAction:(id)arg1;
- (void)setActionSuggester:(id)arg1;
- (void)setAuxiliaryViewPresenter:(id)arg1;
- (void)setCanShowEmptyState:(bool)arg1;
- (void)setCanShowInputAction:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setTriggerInputType:(Class)arg1;
- (void)showActionError:(id)arg1 for:(id)arg2;
- (void)stop;
- (void)stopPickingVariables;
- (Class)triggerInputType;
- (id)workflow;

@end
