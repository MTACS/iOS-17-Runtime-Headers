
@interface PLCloudPendingResourceTask : NSObject {
    bool  _completed;
    NSDate * _lastUpdated;
    NSMutableDictionary * _taskIdentifierToCompletionHandler;
    NSMutableDictionary * _taskIdentifierToProgressBlock;
    CPLResourceTransferTask * _transferTask;
    bool  _transferTaskRemoved;
}

- (void).cxx_destruct;
- (void)addProgressBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2 withTaskIdentifier:(id)arg3;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (id)initWithProgressBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2 forTaskIdentifier:(id)arg3;
- (void)keepAlive;
- (id)lastUpdated;
- (void)reportCompletionWithError:(id)arg1;
- (void)reportProgress:(float)arg1;
- (void)setTransferTask:(id)arg1;
- (id)taskIDs;

@end
