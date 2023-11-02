
@interface PKPayLaterFinancingControllerRequest : NSObject {
    NSDecimalNumber * _amount;
    unsigned long long  _authenticationState;
    NSMutableOrderedSet * _completions;
    NSString * _optionIdentifierToCancel;
    long long  _stateMachineCancelReason;
    NSError * _stateMachineError;
}

@property (nonatomic, readonly) NSDecimalNumber *amount;
@property (nonatomic, readonly) unsigned long long authenticationState;
@property (nonatomic, readonly) NSOrderedSet *completions;
@property (nonatomic, readonly, copy) NSString *optionIdentifierToCancel;
@property (nonatomic, readonly) long long stateMachineCancelReason;
@property (nonatomic, readonly, copy) NSError *stateMachineError;

- (void).cxx_destruct;
- (void)addCompletions:(id)arg1;
- (id)amount;
- (unsigned long long)authenticationState;
- (bool)coalesceWithRequest:(id)arg1;
- (id)completions;
- (id)description;
- (id)initWithTransactionAmount:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithTransactionAmount:(id)arg1 optionIdentifierToCancel:(id)arg2 authenticationState:(unsigned long long)arg3 stateMachineError:(id)arg4 stateMachineCancelReason:(long long)arg5 completion:(id /* block */)arg6;
- (id)optionIdentifierToCancel;
- (long long)stateMachineCancelReason;
- (id)stateMachineError;

@end
