
@interface MLScaler : MLModelEngine <MLModelSpecificationLoader> {
    MLFeatureValue * _scaleValue;
    MLFeatureValue * _shiftValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MLFeatureValue *scaleValue;
@property (nonatomic, readonly) MLFeatureValue *shiftValue;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)initWithShiftValue:(id)arg1 scaleValue:(id)arg2 description:(id)arg3 configuration:(id)arg4;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)predictionTypeForKTrace;
- (id)scaleValue;
- (id)shiftValue;

@end
