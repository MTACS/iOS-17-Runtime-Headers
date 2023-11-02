
@interface FCAssetKeyService : NSObject <FCAssetKeyServiceType> {
    NFPromise * _endpointURLPromise;
    NFLazy * _requestEncoder;
    NFLazy * _session;
}

- (void).cxx_destruct;
- (void)fetchWrappingKeysWithIDs:(id)arg1 completionHandler:(id /* block */)arg2;

@end
