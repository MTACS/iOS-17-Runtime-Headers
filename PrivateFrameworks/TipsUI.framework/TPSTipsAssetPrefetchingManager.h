
@interface TPSTipsAssetPrefetchingManager : NSObject {
    long long  _assetUserInterface;
    TPSTip * _currentTip;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableArray * _sessionItems;
}

@property (nonatomic) long long assetUserInterface;
@property (nonatomic, copy) TPSTip *currentTip;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) NSMutableArray *sessionItems;

- (void).cxx_destruct;
- (void)addFetchOperationWithAssetConfiguration:(id)arg1 type:(long long)arg2 operationName:(id)arg3;
- (void)appendAssetsOperationsForTip:(id)arg1;
- (long long)assetUserInterface;
- (void)cancel;
- (void)cancelFetch;
- (id)currentTip;
- (void)dealloc;
- (id)init;
- (id)operationQueue;
- (void)prefetchAssetsFromTip:(id)arg1 tips:(id)arg2 assetUserInterfaceStyle:(long long)arg3;
- (id)serialQueue;
- (id)sessionItems;
- (void)setAssetUserInterface:(long long)arg1;
- (void)setCurrentTip:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setSessionItems:(id)arg1;

@end
