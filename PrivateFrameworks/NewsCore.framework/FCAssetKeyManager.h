
@interface FCAssetKeyManager : NSObject <FCAssetKeyManagerType, FCOperationThrottlerDelegate> {
    <FCAssetKeyCacheType> * _cache;
    <FCAssetKeyManagerDelegate> * _delegate;
    FCThreadSafeMutableDictionary * _errorsByKey;
    FCThreadSafeMutableSet * _pendingWrappingKeyIDs;
    <FCAssetKeyServiceType> * _service;
    <FCOperationThrottler> * _throttler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedWrappingKeyWithID:(id)arg1;
- (void)clearUnauthorizedAssetKeys;
- (void)eraseAllKeys;
- (void)fetchWrappingKeyWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;

@end
