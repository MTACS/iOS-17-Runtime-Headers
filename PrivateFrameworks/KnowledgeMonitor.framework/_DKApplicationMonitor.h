
@interface _DKApplicationMonitor : _DKApplicationMonitorBase {
    NSMutableDictionary * _activeExtensions;
    BMSource * _appInFocusSource;
    NSMutableDictionary * _currentFrontBoardElements;
    BMSource * _displayElementSource;
    BMStream * _displayElementStream;
    NSString * _lastFocalApplication;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    RBSProcessMonitor * _processMonitor;
}

@property (nonatomic, retain) NSMutableDictionary *currentFrontBoardElements;
@property (nonatomic, retain) BMSource *displayElementSource;
@property (nonatomic, retain) BMStream *displayElementStream;

+ (id)entitlements;

- (void).cxx_destruct;
- (id)_elementFromDisplayLayoutElement:(id)arg1 displayLayout:(id)arg2 context:(id)arg3 changeType:(int)arg4;
- (id)_newElementFromExistingDisplayElement:(id)arg1 newTimestamp:(id)arg2 newChangeType:(int)arg3;
- (void)_updateCurrentElementsWithDisplayElement:(id)arg1;
- (id)currentFrontBoardElements;
- (id)displayElementSource;
- (id)displayElementStream;
- (id /* block */)displayLayoutTransitionHandler;
- (void)donateElementsFromDisplayLayout:(id)arg1 withContext:(id)arg2;
- (id)focalApplicationFromDisplayLayout:(id)arg1;
- (bool)ignoreAppExtension:(id)arg1;
- (id)init;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)obtainCurrentValue;
- (void)platformSpecificStart;
- (void)platformSpecificStop;
- (void)processMonitor:(id)arg1 didUpdateState:(id)arg2 forProcess:(id)arg3;
- (id /* block */)processUpdateHandler;
- (void)setCurrentFrontBoardElements:(id)arg1;
- (void)setDisplayElementSource:(id)arg1;
- (void)setDisplayElementStream:(id)arg1;

@end
