
@interface LCFModelStoreModelMetadataProvider : NSObject {
    NSURL * _metadataPlistFileURL;
    NSURL * _modelStoreRootWithKeyURL;
}

@property (nonatomic, readonly) NSURL *metadataPlistFileURL;
@property (nonatomic, readonly) NSURL *modelStoreRootWithKeyURL;

- (void).cxx_destruct;
- (id)getMetadata;
- (id)getModelMetadata:(id)arg1;
- (id)init:(id)arg1;
- (id)metadataPlistFileURL;
- (id)modelStoreRootWithKeyURL;
- (bool)removeModelMetadata:(id)arg1;
- (bool)setModelMetadata:(id)arg1 metadata:(id)arg2;

@end
