
@interface AMDBaseRecoModel : NSObject <AMDRecoModel> {
    long long  _assetCreationTimestamp;
    MLModel * _model;
    AMDModelAssets * _modelAssets;
    NSString * _modelId;
    AMDModelMetadata * _modelMetadata;
    unsigned long long  _version;
}

@property long long assetCreationTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MLModel *model;
@property (nonatomic, retain) AMDModelAssets *modelAssets;
@property (nonatomic, retain) NSString *modelId;
@property (nonatomic, retain) AMDModelMetadata *modelMetadata;
@property (readonly) Class superclass;
@property unsigned long long version;

+ (id)getCurrentDirURLForName:(id)arg1;
+ (id)getModelforId:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (long long)assetCreationTimestamp;
- (long long)getAssetCreationTimestamp;
- (id)getId;
- (id)getPredictions:(unsigned long long)arg1 andInputBuilder:(id)arg2 andOutputBuilder:(id)arg3 withColdstartModelId:(id)arg4 error:(id*)arg5;
- (unsigned long long)getVersion;
- (id)initWithId:(id)arg1;
- (id)initWithId:(id)arg1 andVersion:(unsigned long long)arg2;
- (bool)isValid;
- (void)loadModelMetadataFromDir:(id)arg1 error:(id*)arg2;
- (id)model;
- (id)modelAssets;
- (id)modelId;
- (id)modelMetadata;
- (bool)parseModelInfoFromBuffer:(id)arg1 error:(id*)arg2;
- (void)setAssetCreationTimestamp:(long long)arg1;
- (void)setModel:(id)arg1;
- (void)setModelAssets:(id)arg1;
- (void)setModelId:(id)arg1;
- (void)setModelMetadata:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
