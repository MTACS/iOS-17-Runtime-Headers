
@interface NTSectionPresencePersonalizationOperation : FCOperation {
    id /* block */  _absolutePresenceHandler;
    NSDictionary * _absolutePresenceResult;
    NSArray * _absoluteRequests;
    <FCReadonlyPersonalizationAggregateStore> * _aggregateStore;
    id /* block */  _personalizationCompletion;
    FCPersonalizationTreatment * _personalizationTreatment;
    id /* block */  _relativePresenceHandler;
    NSDictionary * _relativePresenceResult;
    NSArray * _relativeRequests;
}

@property (nonatomic, copy) id /* block */ absolutePresenceHandler;
@property (nonatomic, copy) NSDictionary *absolutePresenceResult;
@property (nonatomic, copy) NSArray *absoluteRequests;
@property (nonatomic, retain) <FCReadonlyPersonalizationAggregateStore> *aggregateStore;
@property (nonatomic, copy) id /* block */ personalizationCompletion;
@property (nonatomic, copy) FCPersonalizationTreatment *personalizationTreatment;
@property (nonatomic, copy) id /* block */ relativePresenceHandler;
@property (nonatomic, copy) NSDictionary *relativePresenceResult;
@property (nonatomic, copy) NSArray *relativeRequests;

- (void).cxx_destruct;
- (id /* block */)absolutePresenceHandler;
- (id)absolutePresenceResult;
- (id)absoluteRequests;
- (id)aggregateStore;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)personalizationCompletion;
- (id)personalizationTreatment;
- (id /* block */)relativePresenceHandler;
- (id)relativePresenceResult;
- (id)relativeRequests;
- (void)setAbsolutePresenceHandler:(id /* block */)arg1;
- (void)setAbsolutePresenceResult:(id)arg1;
- (void)setAbsoluteRequests:(id)arg1;
- (void)setAggregateStore:(id)arg1;
- (void)setPersonalizationCompletion:(id /* block */)arg1;
- (void)setPersonalizationTreatment:(id)arg1;
- (void)setRelativePresenceHandler:(id /* block */)arg1;
- (void)setRelativePresenceResult:(id)arg1;
- (void)setRelativeRequests:(id)arg1;
- (bool)validateOperation;

@end
