
@protocol ARTechniqueProtocol

@required

+ (bool)producesResultDataForAnchorOfClass:(Class)arg1;
+ (ARTechnique *)techniqueMatchingPredicate:(NSPredicate *)arg1 inArray:(NSArray *)arg2;
+ (ARTechnique *)techniqueOfClass:(Class)arg1 inArray:(NSArray *)arg2;

- (double)bonusLatency;
- (long long)captureBehavior;
- (<ARTechniqueDelegate> *)delegate;
- (bool)deterministicMode;
- (id)initWithParallelTechniques:(NSArray *)arg1;
- (id)initWithTechniques:(NSArray *)arg1;
- (unsigned long long)optionalSensorDataTypes;
- (unsigned long long)powerUsage;
- (NSArray *)predictedResultDataAtTimestamp:(double)arg1 context:(id <ARResultDataContext>)arg2;
- (void)prepare:(bool)arg1;
- (<ARData> *)processData:(id <ARData>)arg1;
- (void)replaceTechniques:(NSArray *)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id <ARResultDataContext>)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (NSSet *)resultDataClasses;
- (void)setBonusLatency:(double)arg1;
- (void)setDelegate:(id <ARTechniqueDelegate>)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)setSplitTechniqueFowardingStrategy:(id <ARTechniqueForwardingStrategy>)arg1;
- (void)setSplitTechniques:(NSArray *)arg1;
- (<ARTechniqueForwardingStrategy> *)splitTechniqueFowardingStrategy;
- (NSArray *)splitTechniques;
- (ARTechnique *)techniqueMatchingPredicate:(NSPredicate *)arg1;
- (ARTechnique *)techniqueOfClass:(Class)arg1;
- (NSNumber *)traceKey;

@end
