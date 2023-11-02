
@interface WFEditorHostingViewController : UIViewController <WFWorkflowEditingDelegate, WorkflowEditor.WorkflowEditorViewDelegate> {
    void actionList;
    void actionSuggester;
    void auxiliaryViewPresenter;
    void coordinateSpaceName;
    void delegate;
    void editorOptions;
    void editorResults;
    void hostingViewController;
    void observers;
    void runner;
    void workflow;
}

@property (nonatomic, readonly) double actionCanvasWidth;
@property (nonatomic, retain) WFContextualActionSuggester *actionSuggester;
@property (nonatomic) <WFEditorAuxiliaryViewPresenter> *auxiliaryViewPresenter;
@property (nonatomic) bool canShowEmptyState;
@property (nonatomic) bool canShowInputAction;
@property (nonatomic) <WFEditorHostingViewControllerDelegate> *delegate;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isEditable;
@property (nonatomic, readonly) bool isHomeWorkflow;
@property (nonatomic, readonly) bool isRunning;
@property (nonatomic) Class triggerInputType;

- (void).cxx_destruct;
- (double)actionCanvasWidth;
- (id)actionSuggester;
- (void)appendAction:(id)arg1 selectionAware:(bool)arg2;
- (id)auxiliaryViewPresenter;
- (bool)canShowEmptyState;
- (bool)canShowInputAction;
- (id)contentScrollViewForEdge:(unsigned long long)arg1;
- (id)delegate;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWorkflow:(id)arg1;
- (void)insertAction:(id)arg1 at:(long long)arg2;
- (void)insertActions:(id)arg1 at:(long long)arg2;
- (bool)isEditable;
- (bool)isHomeWorkflow;
- (bool)isRunning;
- (void)loadView;
- (void)moveActionsFrom:(id)arg1 to:(id)arg2;
- (void)performScrollingTest:(id)arg1;
- (void)removeActions:(id)arg1 mode:(long long)arg2;
- (void)reportSuggestionSessionEnded;
- (void)runWithSource:(id)arg1;
- (void)scrollToAction:(id)arg1;
- (void)setActionSuggester:(id)arg1;
- (void)setAuxiliaryViewPresenter:(id)arg1;
- (void)setCanShowEmptyState:(bool)arg1;
- (void)setCanShowInputAction:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setIsEditable:(bool)arg1;
- (void)setTriggerInputType:(Class)arg1;
- (void)showActionError:(id)arg1 for:(id)arg2;
- (void)startPickingParametersForImportQuestionsWithExcluding:(id)arg1 onSelect:(id /* block */)arg2;
- (void)stop;
- (void)stopPickingVariables;
- (Class)triggerInputType;
- (void)viewWillAppear:(bool)arg1;
- (void)workflow:(id)arg1 insertActions:(id)arg2 atIndexes:(id)arg3;
- (void)workflow:(id)arg1 moveActionsAtIndexes:(id)arg2 toIndexes:(id)arg3;
- (void)workflow:(void *)arg1 removeAction:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 25: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, out const /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, float, long, out /* Warning: Unrecognized filer type: 'w' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
