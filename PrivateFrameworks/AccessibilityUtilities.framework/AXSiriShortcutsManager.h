
@interface AXSiriShortcutsManager : NSObject <WFObservableResultObserver, WFWorkflowRunnerClientDelegate> {
    NSArray * _cachedShortcuts;
    int  _contentProtectionNotifyToken;
    WFObservableArrayResult * _observedWorkflows;
    NSObject<OS_dispatch_queue> * _queue;
    VCVoiceShortcutClient * _shortcutClient;
    unsigned long long  _source;
    NSMutableDictionary * _updateBlocks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VCVoiceShortcutClient *shortcutClient;
@property (nonatomic, readonly) NSArray *shortcuts;
@property (nonatomic, readonly) unsigned long long source;
@property (readonly) Class superclass;

+ (id)sharedManager;
+ (id)shortcutsManagerForSource:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_loadShortcuts;
- (void)_queue_loadShortcuts;
- (id)initWithSource:(unsigned long long)arg1;
- (void)observableResultDidChange:(id)arg1;
- (void)performShortcut:(id)arg1;
- (id)registerShortcutsDidChangeBlock:(id /* block */)arg1;
- (void)setShortcutClient:(id)arg1;
- (id)shortcutClient;
- (id)shortcutForIdentifier:(id)arg1;
- (id)shortcuts;
- (unsigned long long)source;
- (void)unregisterShortcutsDidChangeBlock:(id)arg1;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;

@end
