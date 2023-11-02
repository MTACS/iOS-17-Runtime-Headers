
@interface ARParentTechnique : ARTechnique <ARTechniqueDelegate> {
    NSArray * __internalTechniques;
    bool  _parallelExecution;
    ARTechniqueParallelGatherContext * _previousContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _previousContext_lock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (copy) NSArray *_internalTechniques;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isParallel;
@property (readonly) Class superclass;
@property (copy) NSArray *techniques;

+ (id)parentTechniqueOfClass:(Class)arg1 inArray:(id)arg2;
+ (id)techinqueInArray:(id)arg1 passingTest:(id /* block */)arg2;
+ (id)techniquesByForceReplacingTechniques:(id)arg1 withMatchingClassTechniques:(id)arg2;
+ (id)techniquesByReplacingOriginalTechniques:(id)arg1 withReplacementTechniques:(id)arg2 passingTest:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_fullDescription;
- (id)_internalTechniques;
- (void)_submitResultsForTimestamp:(double)arg1 context:(id)arg2;
- (id)description;
- (void)dotGraphWithLines:(id)arg1;
- (id)initWithParallelTechniques:(id)arg1;
- (id)initWithTechniques:(id)arg1;
- (id)initWithTechniques:(id)arg1 delegate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isParallel;
- (unsigned long long)optionalSensorDataTypes;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (id)processData:(id)arg1 onTechniques:(id)arg2;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 onTechniques:(id)arg3;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)reuseTechniques:(id)arg1;
- (void)setBonusLatency:(double)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)setTechniques:(id)arg1;
- (void)set_internalTechniques:(id)arg1;
- (void)siblingTechniquesDidChange:(id)arg1;
- (void)technique:(id)arg1 didFailWithError:(id)arg2;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4 onTechniques:(id)arg5;
- (id)techniqueMatchingPredicate:(id)arg1;
- (id)techniqueOfClass:(Class)arg1;
- (id)techniques;

@end
