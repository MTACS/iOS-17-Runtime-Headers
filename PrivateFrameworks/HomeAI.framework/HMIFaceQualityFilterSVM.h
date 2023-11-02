
@interface HMIFaceQualityFilterSVM : HMFObject <HMFLogging> {
    MLModel * _mlModel;
    MLModel * _scalerModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLModel *mlModel;
@property (readonly) MLModel *scalerModel;
@property (readonly) Class superclass;

+ (id)dataScalerInputName;
+ (id)dataScalerOutputName;
+ (id)defaultAestheticQualityDataScalerPath;
+ (id)defaultAestheticQualityModelPath;
+ (id)defaultRecognizabilityDataScalerPath;
+ (id)defaultRecognizabilityModelPath;
+ (id)logCategory;
+ (id)modelPathForResource:(id)arg1;
+ (id)svmInputName;
+ (id)svmOutputName;

- (void).cxx_destruct;
- (id)initWithModelPath:(id)arg1 dataScalerPath:(id)arg2 error:(id*)arg3;
- (id)mlModel;
- (bool)predict:(id)arg1 output:(double*)arg2 error:(id*)arg3;
- (id)scalerModel;

@end
