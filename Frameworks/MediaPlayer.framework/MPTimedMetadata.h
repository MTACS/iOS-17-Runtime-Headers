
@interface MPTimedMetadata : NSObject {
    AVMetadataItem * _metadataItem;
}

@property (nonatomic, readonly) NSDictionary *allMetadata;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *keyspace;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)_initWithMetadataItem:(id)arg1;
- (id)allMetadata;
- (id)init;
- (id)key;
- (id)keyspace;
- (double)timestamp;
- (id)value;

@end
