
@interface AMDInputBuilder : NSObject {
    NSMutableDictionary * _inputsDefinitions;
    NSString * _modelId;
}

@property (nonatomic, retain) NSMutableDictionary *inputsDefinitions;
@property (nonatomic, retain) NSString *modelId;

+ (unsigned int)getSizeOfDataType:(long long)arg1;

- (void).cxx_destruct;
- (id)getGeneralMultiArrayForInput:(id)arg1 withDataType:(long long)arg2 andShape:(id)arg3 withPaddingValue:(id)arg4 usingMetadata:(id)arg5 andModelAssets:(id)arg6 error:(id*)arg7;
- (id)getHyperParameterInput:(id)arg1 usingMetadata:(id)arg2 withInputFeatureDefinition:(id)arg3;
- (id)getInputsWithMetadata:(id)arg1 andModelAssets:(id)arg2 error:(id*)arg3;
- (id)getMinimalCToLMapping;
- (id)getModelInput:(id)arg1 usingMetadata:(id)arg2 andModelAssets:(id)arg3 error:(id*)arg4;
- (id)getRemapInfoFrom:(id)arg1 andModelAssets:(id)arg2;
- (id)getSimpleMultiArrayForInput:(id)arg1 OfSize:(id)arg2 withDataType:(long long)arg3 withPaddingValue:(id)arg4 usingMetadata:(id)arg5 andModelAssets:(id)arg6 error:(id*)arg7;
- (id)initWithDictionary:(id)arg1 andModelId:(id)arg2;
- (id)inputsDefinitions;
- (bool)isMatchingShape:(id)arg1 with:(id)arg2;
- (bool)isValid;
- (id)modelId;
- (void)setInputsDefinitions:(id)arg1;
- (void)setModelId:(id)arg1;

@end
