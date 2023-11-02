
@interface HFCameraClipVideoAssetContextProvider : NSObject <HFCameraClipVideoAssetContextProviderDelegate> {
    <HFCameraClipVideoAssetContextProviderDelegate> * _delegate;
    HMFUnfairLock * _lock;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _videoContextFuturesByClipID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HFCameraClipVideoAssetContextProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *videoContextFuturesByClipID;

+ (id)defaultProvider;

- (void).cxx_destruct;
- (id)cachedVideoAssetContextForClip:(id)arg1 clipManager:(id)arg2;
- (id)delegate;
- (id)fetchVideoAssetContextForClip:(id)arg1 clipManager:(id)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)lock;
- (id)newFetchVideoAssetContextOperationForClip:(id)arg1 clipManager:(id)arg2;
- (id)operationQueue;
- (id)videoContextFuturesByClipID;

@end
