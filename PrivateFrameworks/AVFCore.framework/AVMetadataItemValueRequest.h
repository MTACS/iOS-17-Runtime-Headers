
@interface AVMetadataItemValueRequest : NSObject {
    AVMetadataItemValueRequestInternal * _valueRequest;
}

@property (readonly) AVMetadataItem *metadataItem;

+ (id)metadataItemValueRequestWithMetadataItem:(id)arg1;

- (id)dataType;
- (void)dealloc;
- (id)error;
- (id)initWithMetadataItem:(id)arg1;
- (id)metadataItem;
- (void)respondWithError:(id)arg1;
- (void)respondWithValue:(id)arg1;
- (void)respondWithValue:(id)arg1 dataType:(id)arg2;
- (id)value;

@end
