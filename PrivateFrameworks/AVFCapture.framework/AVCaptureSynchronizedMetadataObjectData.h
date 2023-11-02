
@interface AVCaptureSynchronizedMetadataObjectData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedMetadataObjectDataInternal * _internal;
}

@property (readonly) NSArray *metadataObjects;

+ (void)initialize;

- (id)_initWithMetadataObjectCollection:(id)arg1;
- (void)addSynchronizedData:(id)arg1;
- (void)dealloc;
- (id)handledMetadataObjectTypes;
- (id)metadataObjects;

@end
