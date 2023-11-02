
@interface SBTraitsInputsValidator : NSObject <TRAArbitrationInputsValidating> {
    NSNumber * _validatorOrder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *validatorOrder;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithValidatorOrder:(id)arg1;
- (id)validateInputs:(id)arg1 withContext:(id)arg2;
- (id)validatorOrder;

@end
