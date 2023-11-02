
@interface BDSReadingGoalsServiceClient : NSObject {
    id /* block */  _onRemoteChange;
    <BDSServiceProtocol> * _serviceProxy;
}

@property (nonatomic, copy) id /* block */ onRemoteChange;
@property (nonatomic, readonly) <BDSServiceProtocol> *serviceProxy;

+ (void)clearLocalCachedDataWithCompletionHandler:(id /* block */)arg1;
+ (id)sharedServiceProxy;

- (void).cxx_destruct;
- (void)_handleOnRemoteChange:(id)arg1;
- (void)changeBooksFinishedGoalTo:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)changeDailyGoalTo:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)clearDataWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (id /* block */)onRemoteChange;
- (id)serviceProxy;
- (void)setOnRemoteChange:(id /* block */)arg1;
- (void)stateInfoWithCompletionHandler:(id /* block */)arg1;

@end
