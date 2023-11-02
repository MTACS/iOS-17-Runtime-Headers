
@interface REInteractionDescriptor : NSObject <NSCopying, REAutomaticExportedInterface> {
    REFeature * _biasFeature;
    bool  _enableExploreExploit;
    float  _exploreBias;
    REFeature * _identificationFeature;
    float  _initialProbability;
    NSString * _name;
    REFeature * _selectionFeature;
    float  _trainingSimulationExploreBias;
    float  _varianceEpsilon;
    float  _weight;
}

@property (nonatomic, retain) REFeature *biasFeature;
@property (nonatomic) bool enableExploreExploit;
@property (nonatomic) float exploreBias;
@property (nonatomic, retain) REFeature *identificationFeature;
@property (nonatomic) float initialProbability;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) REFeature *selectionFeature;
@property (nonatomic) float trainingSimulationExploreBias;
@property (nonatomic) float varianceEpsilon;
@property (nonatomic) float weight;

- (void).cxx_destruct;
- (id)biasFeature;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enableExploreExploit;
- (float)exploreBias;
- (unsigned long long)hash;
- (id)identificationFeature;
- (id)init;
- (float)initialProbability;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)selectionFeature;
- (void)setBiasFeature:(id)arg1;
- (void)setEnableExploreExploit:(bool)arg1;
- (void)setExploreBias:(float)arg1;
- (void)setIdentificationFeature:(id)arg1;
- (void)setInitialProbability:(float)arg1;
- (void)setName:(id)arg1;
- (void)setSelectionFeature:(id)arg1;
- (void)setTrainingSimulationExploreBias:(float)arg1;
- (void)setVarianceEpsilon:(float)arg1;
- (void)setWeight:(float)arg1;
- (float)trainingSimulationExploreBias;
- (float)varianceEpsilon;
- (float)weight;

@end
