
@interface AVAssetReaderOutputMetadataAdaptor : NSObject <AVAssetReaderOutputAdaptor> {
    AVAssetReaderOutputMetadataAdaptorInternal * _internal;
}

@property (nonatomic, readonly) AVAssetReaderTrackOutput *assetReaderTrackOutput;

+ (id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(id)arg1;

- (int)addExtractionForOutput:(id)arg1 figAssetReader:(struct OpaqueFigAssetReader { }*)arg2 options:(id)arg3 withOutputExtactionID:(int*)arg4;
- (id)assetReaderTrackOutput;
- (void)dealloc;
- (id)init;
- (id)initWithAssetReaderTrackOutput:(id)arg1;
- (id)nextTimedMetadataGroup;

@end
