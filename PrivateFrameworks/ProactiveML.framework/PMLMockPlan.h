
@interface PMLMockPlan : NSObject <PMLPlanProtocol> {
    bool  _didRun;
    NSString * _planId;
    bool  _returnValue;
    PMLTrainingStore * _store;
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didRun;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *planId;
@property (readonly) Class superclass;
@property unsigned long long version;

+ (void)clearLastDeserializedPlans;
+ (id)lastDeserializedPlanWithId:(id)arg1;
+ (id)lastDeserializedPlansMap;
+ (void)setLastDeserializedPlanWithId:(id)arg1 toPlan:(id)arg2;

- (void).cxx_destruct;
- (bool)didRun;
- (id)initWithPlanId:(id)arg1;
- (id)initWithPlanId:(id)arg1 store:(id)arg2;
- (id)initWithPlanId:(id)arg1 store:(id)arg2 version:(unsigned long long)arg3 returningAfterRunning:(bool)arg4;
- (id)initWithPlanId:(id)arg1 version:(unsigned long long)arg2;
- (id)initWithPlanId:(id)arg1 version:(unsigned long long)arg2 returningAfterRunning:(bool)arg3;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithVersion:(unsigned long long)arg1;
- (id)planId;
- (id)runWithError:(id*)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (unsigned long long)version;

@end
