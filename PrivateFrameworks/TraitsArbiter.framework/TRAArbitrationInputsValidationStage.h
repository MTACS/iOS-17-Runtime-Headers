
@interface TRAArbitrationInputsValidationStage : NSObject <BSDescriptionProviding, TRAArbitrationInputsValidating> {
    TRAArbiter * _arbiter;
    NSMutableArray * _inputsValidators;
    <BSInvalidatable> * _stateDumpHandle;
    NSNumber * validatorOrder;
}

@property (nonatomic) TRAArbiter *arbiter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *validatorOrder;

- (void).cxx_destruct;
- (id)_setupStateDump;
- (void)addInputsValidator:(id)arg1;
- (void)addInputsValidator:(id)arg1 update:(bool)arg2;
- (id)arbiter;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithValidators:(id)arg1 arbiter:(id)arg2;
- (void)removeInputsValidator:(id)arg1;
- (void)removeInputsValidator:(id)arg1 update:(bool)arg2;
- (void)setArbiter:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)validateInputs:(id)arg1 withContext:(id)arg2;
- (id)validatorOrder;

@end
