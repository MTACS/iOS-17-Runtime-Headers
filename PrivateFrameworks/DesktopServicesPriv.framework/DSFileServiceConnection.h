
@interface DSFileServiceConnection : NSObject {
    id /* block */  _didUpdateInProgressOperationsHandler;
    NSMutableArray * _fileOperations;
    NSMutableDictionary * _progressTokenMap;
    NSMutableArray * _progresses;
    NSObject<OS_dispatch_source> * _updateCurrentOperationsSource;
}

@property (nonatomic, copy) id /* block */ didUpdateInProgressOperationsHandler;

- (void).cxx_destruct;
- (bool)_addOperationForProgress:(id)arg1;
- (void)_reloadCurrentOperations;
- (void)_removeOperationForProgress:(id)arg1;
- (void)_subscribeToProgressIfNeeded:(id)arg1;
- (void)_triggerReloadCurrentOperations;
- (void)dealloc;
- (id /* block */)didUpdateInProgressOperationsHandler;
- (id)init;
- (void)requestInProgressOperationsWithResponseBlock:(id /* block */)arg1;
- (void)setDidUpdateInProgressOperationsHandler:(id /* block */)arg1;

@end
