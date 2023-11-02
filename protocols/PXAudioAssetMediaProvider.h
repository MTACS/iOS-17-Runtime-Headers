
@protocol PXAudioAssetMediaProvider <NSObject>

@required

+ (<PXAudioAssetMediaProvider> *)sharedInstance;

- (void)cancelRequest:(long long)arg1;
- (id)initWithQOSClass:(unsigned int)arg1;
- (long long)requestMediaForAsset:(void *)arg1 options:(void *)arg2 resultHandler:(void *)arg3; // needs 3 arg types, found 10: <PXAudioAsset> *, PXAudioRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVAsset *, AVAudioMix *, NSDictionary *, void*

@end
