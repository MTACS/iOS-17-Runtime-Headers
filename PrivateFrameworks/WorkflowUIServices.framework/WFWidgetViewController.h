
@interface WFWidgetViewController : UIViewController <WFWidgetGridViewDelegate, WFWorkflowRunnerClientDelegate> {
    WFWidgetCache * _cache;
    WFWidgetWorkflowRunnerClient * _client;
    double  _cornerRadius;
    WFWidgetGridView * _gridView;
    NSObject<OS_os_log> * _log;
    bool  _needsLayout;
    WFWidgetOptions * _options;
    bool  _running;
    long long  _widgetType;
}

@property (nonatomic, readonly) WFWidgetCache *cache;
@property (nonatomic, retain) WFWidgetWorkflowRunnerClient *client;
@property (nonatomic, readonly) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFWidgetGridView *gridView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic) bool needsLayout;
@property (nonatomic, readonly) WFWidgetOptions *options;
@property (nonatomic) bool running;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long widgetType;

+ (id)progressSubscribers;
+ (id)runningStates;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)cache;
- (id)client;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (double)cornerRadius;
- (void)dealloc;
- (id)gridView;
- (void)gridView:(id)arg1 cellDidTransitionToRunningState:(long long)arg2;
- (void)gridView:(id)arg1 didTapCell:(id)arg2;
- (void)gridViewDidFinishLayout:(id)arg1;
- (void)handleUpdateFromCache:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (void)layoutWithWorkflows:(id)arg1;
- (unsigned long long)limitFromOptions:(id)arg1;
- (void)loadView;
- (id)log;
- (bool)needsLayout;
- (id)options;
- (id /* block */)publishingHandlerForCell:(id)arg1;
- (void)refreshWorkflows;
- (void)removeStaleRunningContexts;
- (void)restoreRunningStateIfNecessary;
- (void)resumeRunningWithCell:(id)arg1;
- (bool)running;
- (id)runningContextForWorkflowIdentifier:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setNeedsLayout:(bool)arg1;
- (void)setRunning:(bool)arg1;
- (void)showRunningUIForCell:(id)arg1;
- (void)startObservingContentSizeCategoryNotifications;
- (void)stopObservingContentSizeCategoryNotifications;
- (void)stopRunningWithCell:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (long long)widgetType;
- (long long)widgetTypeFromOptions:(id)arg1;
- (id)workflowOrFolderIdentifierFromOptions:(id)arg1;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;

@end
