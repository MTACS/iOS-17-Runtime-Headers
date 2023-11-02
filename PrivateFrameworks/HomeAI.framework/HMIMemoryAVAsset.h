
@interface HMIMemoryAVAsset : AVURLAsset <AVAssetResourceLoaderDelegate, HMFLogging> {
    NSData * _data;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (bool)loadValuesSynchronously;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;

@end
