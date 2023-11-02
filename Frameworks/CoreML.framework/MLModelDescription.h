
@interface MLModelDescription : NSObject <NSSecureCoding> {
    NSArray * _classLabels;
    NSDictionary * _inputDescriptionsByName;
    NSOrderedSet * _inputFeatureNames;
    bool  _isUpdatable;
    NSDictionary * _metadata;
    MLLayerPath * _modelPath;
    NSURL * _modelURL;
    NSDictionary * _outputDescriptionsByName;
    NSOrderedSet * _outputFeatureNames;
    NSDictionary * _parameterDescriptionsByKey;
    NSString * _predictedFeatureName;
    NSString * _predictedProbabilitiesName;
    NSDictionary * _trainingInputDescriptionsByName;
}

@property (nonatomic, copy) NSArray *classLabels;
@property (readonly) MLFeatureDescription *classProbabilityFeatureDescription;
@property (nonatomic, readonly) NSDictionary *inputDescriptionsByName;
@property (readonly) NSOrderedSet *inputFeatureNames;
@property (nonatomic) bool isUpdatable;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, retain) MLLayerPath *modelPath;
@property (nonatomic, retain) NSURL *modelURL;
@property (nonatomic, readonly) NSDictionary *outputDescriptionsByName;
@property (readonly) NSOrderedSet *outputFeatureNames;
@property (nonatomic, retain) NSDictionary *parameterDescriptionsByKey;
@property (readonly) MLFeatureDescription *predictedClassFeatureDescription;
@property (nonatomic, readonly, copy) NSString *predictedFeatureName;
@property (nonatomic, readonly, copy) NSString *predictedProbabilitiesName;
@property (nonatomic, readonly, copy) MLFeatureDescription *predictedValueFeatureDescription;
@property (nonatomic, retain) NSDictionary *trainingInputDescriptionsByName;

+ (id)metadataWithFormat:(void*)arg1;
+ (id)metadataWithSpecification:(void*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classLabels;
- (id)classProbabilityFeatureDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEnumeratedShapeInputs;
- (bool)hasRangeShapeInputs;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompiledModelArchive:(struct _MLModelInputArchiver { }*)arg1 error:(id*)arg2;
- (id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 metadata:(id)arg5;
- (id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 trainingInputDescriptions:(id)arg5 metadata:(id)arg6;
- (id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 trainingInputDescriptions:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 metadata:(id)arg8;
- (id)initWithModelDescriptionSpecification:(void*)arg1 error:(id*)arg2;
- (id)initWithModelSpecification:(void*)arg1 error:(id*)arg2;
- (id)inputDescriptionsByName;
- (id)inputFeatureNames;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDescription:(id)arg1;
- (bool)isUpdatable;
- (id)metadata;
- (id)modelPath;
- (id)modelURL;
- (id)outputDescriptionsByName;
- (id)outputFeatureNames;
- (id)parameterDescriptionsByKey;
- (id)predictedClassFeatureDescription;
- (id)predictedFeatureName;
- (id)predictedProbabilitiesName;
- (id)predictedValueFeatureDescription;
- (void)setClassLabels:(id)arg1;
- (void)setIsUpdatable:(bool)arg1;
- (void)setModelPath:(id)arg1;
- (void)setModelURL:(id)arg1;
- (void)setParameterDescriptionsByKey:(id)arg1;
- (void)setTrainingInputDescriptionsByName:(id)arg1;
- (id)trainingInputDescriptionsByName;
- (bool)validateAsClassifierDescriptionAndReturnError:(id*)arg1;
- (bool)validateAsRegressorDescriptionAndReturnError:(id*)arg1;
- (bool)verifyInput:(id)arg1 error:(id*)arg2;

@end
