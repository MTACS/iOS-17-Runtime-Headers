
@interface WBSettingsTaskHandler : NSObject {
    id  _backgroundTaskAssertionToken;
    long long  _currentRetryCount;
    WBSettingsTask * _currentTask;
    id /* block */  _finishBackgroundTaskAssertionBlock;
    NSObject<OS_dispatch_queue> * _queue;
    WebBookmarksSettingsGateway * _settingsGateway;
    id /* block */  _startBackgroundTaskAssertionBlock;
    NSMutableArray * _tasks;
}

@property (nonatomic, copy) id /* block */ finishBackgroundTaskAssertionBlock;
@property (nonatomic, copy) id /* block */ startBackgroundTaskAssertionBlock;

- (void).cxx_destruct;
- (void)_attemptCurrentTask;
- (void)_currentTaskAttemptDidFinishWithError:(id)arg1;
- (void)_enqueueTask:(id)arg1;
- (void)_finishCurrentTask;
- (void)_performNextTask;
- (bool)_shouldEnqueueTask:(id)arg1;
- (void)enqueueTask:(id)arg1;
- (id /* block */)finishBackgroundTaskAssertionBlock;
- (id)init;
- (void)setFinishBackgroundTaskAssertionBlock:(id /* block */)arg1;
- (void)setStartBackgroundTaskAssertionBlock:(id /* block */)arg1;
- (id /* block */)startBackgroundTaskAssertionBlock;

@end
