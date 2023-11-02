
@interface ARTechnique : NSObject <ARDotGraph, ARLoggingFullDescription, ARTechniqueProtocol> {
    double  _bonusLatency;
    <ARTechniqueDelegate> * _delegate;
    unsigned long long  _powerUsage;
    <ARTechniqueForwardingStrategy> * _splitTechniqueFowardingStrategy;
    NSArray * _splitTechniques;
    NSNumber * _traceKey;
}

@property double bonusLatency;
@property (readonly, copy) NSString *debugDescription;
@property <ARTechniqueDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long powerUsage;
@property (retain) <ARTechniqueForwardingStrategy> *splitTechniqueFowardingStrategy;
@property (retain) NSArray *splitTechniques;
@property (readonly) Class superclass;
@property (readonly) NSNumber *traceKey;

+ (id)colorForTechnique:(id)arg1;
+ (bool)producesResultDataForAnchorOfClass:(Class)arg1;
+ (id)techniqueMatchingPredicate:(id)arg1 inArray:(id)arg2;
+ (id)techniqueOfClass:(Class)arg1 inArray:(id)arg2;

- (void).cxx_destruct;
- (id)_fullDescription;
- (double)bonusLatency;
- (long long)captureBehavior;
- (id)delegate;
- (id)description;
- (bool)deterministicMode;
- (void)dotGraphWithLines:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithParallelTechniques:(id)arg1;
- (id)initWithTechniques:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeResultData:(id)arg1 intoData:(id)arg2 context:(id)arg3;
- (unsigned long long)optionalSensorDataTypes;
- (unsigned long long)powerUsage;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)replaceTechniques:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)setBonusLatency:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)setSplitTechniqueFowardingStrategy:(id)arg1;
- (void)setSplitTechniques:(id)arg1;
- (void)siblingTechniquesDidChange:(id)arg1;
- (id)splitTechniqueFowardingStrategy;
- (id)splitTechniques;
- (id)techniqueMatchingPredicate:(id)arg1;
- (id)techniqueOfClass:(Class)arg1;
- (id)techniques;
- (id)traceKey;

@end
