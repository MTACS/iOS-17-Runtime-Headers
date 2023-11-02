
@interface AVAssetWriterInputMetadataAdaptor : NSObject {
    AVAssetWriterInputMetadataAdaptorInternal * _internal;
}

@property (nonatomic, readonly) AVAssetWriterInput *assetWriterInput;

+ (id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1;
+ (void)initialize;

- (bool)appendTimedMetadataGroup:(id)arg1;
- (id)assetWriterInput;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAssetWriterInput:(id)arg1;

@end
