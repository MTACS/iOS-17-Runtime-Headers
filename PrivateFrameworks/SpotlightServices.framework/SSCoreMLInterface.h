
@interface SSCoreMLInterface : NSObject {
    MLModelAsset * asset;
    MLModel * model;
}

- (void).cxx_destruct;
- (id)getDescription;
- (id)getInputDescriptionsByName;
- (id)getVersionString;
- (id)initSpecificModel:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (float)predict:(id)arg1 error:(id*)arg2;
- (float)predictFromDictionaryFeatures:(id)arg1 error:(id*)arg2;
- (float)predictFromValues:(id)arg1 error:(id*)arg2;

@end
