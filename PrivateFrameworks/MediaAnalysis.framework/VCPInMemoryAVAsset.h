
@interface VCPInMemoryAVAsset : AVURLAsset <AVAssetResourceLoaderDelegate> {
    NSData * _data;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)assetWithData:(id)arg1;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;

@end
