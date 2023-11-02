
@interface LCFModelStore : NSObject {
    NSURL * _emptyModelURL;
    NSString * _key;
    LCFModelStoreModelMetadataProvider * _modelMetadataProvider;
    NSURL * _modelStoreRootURL;
    NSURL * _modelStoreRootWithKeyURL;
    NSURL * _originalEmptyModelURL;
}

@property (nonatomic, readonly) NSURL *emptyModelURL;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) LCFModelStoreModelMetadataProvider *modelMetadataProvider;
@property (nonatomic, readonly) NSURL *modelStoreRootURL;
@property (nonatomic, readonly) NSURL *modelStoreRootWithKeyURL;
@property (nonatomic, readonly) NSURL *originalEmptyModelURL;

- (void).cxx_destruct;
- (bool)clear;
- (bool)deleteModel:(id)arg1;
- (id)emptyModelURL;
- (id)getBaseModelURL:(id)arg1 modelConfig:(id)arg2;
- (id)getModelConfig:(id)arg1;
- (id)getModelMetadata:(id)arg1;
- (id)getModelURL:(id)arg1;
- (id)init:(id)arg1 modelStoreRootURL:(id)arg2;
- (id)init:(id)arg1 modelStoreRootURL:(id)arg2 originalEmptyModelURL:(id)arg3;
- (id)key;
- (id)listModelNames;
- (bool)markModelTrained:(id)arg1;
- (id)modelMetadataProvider;
- (id)modelStoreRootURL;
- (id)modelStoreRootWithKeyURL;
- (id)originalEmptyModelURL;
- (bool)setModelMetadata:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)storeModel:(id)arg1;
- (id)storeModel:(id)arg1 modelConfig:(id)arg2;

@end
