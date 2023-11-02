
@interface AMDModelMetadata : NSObject {
    AMDModelAssetsMetadata * _assetsMetadata;
    NSMutableDictionary * _inputsMetadata;
    NSNumber * _mappingFilesRequired;
    BOOL  _modelArchType;
    NSString * _modelId;
    NSString * _modelUid;
    NSMutableDictionary * _outputsMetadata;
}

@property (nonatomic, retain) AMDModelAssetsMetadata *assetsMetadata;
@property (nonatomic, retain) NSMutableDictionary *inputsMetadata;
@property (nonatomic, retain) NSNumber *mappingFilesRequired;
@property BOOL modelArchType;
@property (nonatomic, retain) NSString *modelId;
@property (nonatomic, retain) NSString *modelUid;
@property (nonatomic, retain) NSMutableDictionary *outputsMetadata;

- (void).cxx_destruct;
- (id)assetsMetadata;
- (id)getAssetsMetadata;
- (id)getInputsMetadata;
- (id)getMappingFileRequirement;
- (BOOL)getModelArchType;
- (id)getModelUid;
- (id)getOutputsMetadata;
- (id)initWithMetadataJSON:(id)arg1 error:(id*)arg2;
- (id)inputsMetadata;
- (bool)isValid;
- (id)mappingFilesRequired;
- (BOOL)modelArchType;
- (id)modelId;
- (id)modelUid;
- (id)outputsMetadata;
- (void)setAssetsMetadata:(id)arg1;
- (void)setInputsMetadata:(id)arg1;
- (void)setMappingFilesRequired:(id)arg1;
- (void)setModelArchType:(BOOL)arg1;
- (void)setModelId:(id)arg1;
- (void)setModelUid:(id)arg1;
- (void)setOutputsMetadata:(id)arg1;

@end
