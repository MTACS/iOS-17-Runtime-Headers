
@interface QuickTypePFLTrainerMLP : NSObject {
    unsigned long long  _batchSize;
    NSNumber * _clippingNorm;
    NSNumber * _gradientClipMax;
    NSNumber * _gradientClipMin;
    NSNumber * _initialLoss;
    NSNumber * _learningRate;
    struct CFScopedPtr<void *> { 
        void *m_ref; 
    }  _model;
    unsigned long long  _normBinCount;
    NSString * _privacyIdentifier;
    NSURL * _seedModelPath;
    NSNumber * _trainingLoss;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) NSNumber *clippingNorm;
@property (nonatomic, retain) NSNumber *gradientClipMax;
@property (nonatomic, retain) NSNumber *gradientClipMin;
@property (nonatomic, readonly) NSNumber *initialLoss;
@property (nonatomic, retain) NSNumber *learningRate;
@property (nonatomic) unsigned long long normBinCount;
@property (nonatomic, readonly) NSString *privacyIdentifier;
@property (nonatomic, readonly) NSNumber *trainingLoss;

+ (struct __CFData { }*)copyToFlatBuffer:(void*)arg1;
+ (void)initialize;
+ (id)reportingStringForModelUpdates:(float*)arg1 count:(unsigned long long)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (id)clippingNorm;
- (id)getWeightUpdatesAddNoise:(bool)arg1 encryptionKey:(id)arg2 recipe:(id)arg3;
- (id)gradientClipMax;
- (id)gradientClipMin;
- (id)initWithSeedModelPath:(id)arg1 andPrivacyIdentifier:(id)arg2;
- (id)initialLoss;
- (id)learningRate;
- (unsigned long long)normBinCount;
- (id)privacyIdentifier;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setClippingNorm:(id)arg1;
- (void)setGradientClipMax:(id)arg1;
- (void)setGradientClipMin:(id)arg1;
- (void)setLearningRate:(id)arg1;
- (void)setNormBinCount:(unsigned long long)arg1;
- (bool)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2;
- (id)trainingLoss;
- (void)writeModelToURL:(id)arg1;

@end
