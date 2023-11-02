
@interface _PXDefaultAudioCueProvider : NSObject <PXAudioCueProvider> {
    NSMutableDictionary * _providersByCatalog;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

- (void).cxx_destruct;
- (id)_cueProviderForCatalog:(long long)arg1;
- (id)init;
- (id)requestCuesForAudioAsset:(id)arg1 resultHandler:(id /* block */)arg2;

@end
