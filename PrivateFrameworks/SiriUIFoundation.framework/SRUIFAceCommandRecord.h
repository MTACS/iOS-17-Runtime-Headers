
@interface SRUIFAceCommandRecord : NSObject {
    <SAAceCommand> * _aceCommand;
    id /* block */  _commandCompletion;
    <SRUIFAceCommandRecordDelegate> * _delegate;
    long long  _numberOfStartedActions;
    long long  _numberOfStoppedActions;
    long long  _numberOfSuccessfullyCompletedActions;
    long long  _numberOfUnsuccessfullyCompletedActions;
    long long  _result;
}

@property (nonatomic, readonly) <SAAceCommand> *aceCommand;
@property (nonatomic, copy) id /* block */ commandCompletion;
@property (nonatomic) <SRUIFAceCommandRecordDelegate> *delegate;
@property (setter=_setNumberOfStartedActions:, nonatomic) long long numberOfStartedActions;
@property (setter=_setNumberOfStoppedActions:, nonatomic) long long numberOfStoppedActions;
@property (setter=_setNumberOfSuccessfullyCompletedActions:, nonatomic) long long numberOfSuccessfullyCompletedActions;
@property (setter=_setNumberOfUnsuccessfullyCompletedActions:, nonatomic) long long numberOfUnsuccessfullyCompletedActions;
@property (setter=_setResult:, nonatomic) long long result;

- (void).cxx_destruct;
- (void)_setNumberOfStartedActions:(long long)arg1;
- (void)_setNumberOfStoppedActions:(long long)arg1;
- (void)_setNumberOfSuccessfullyCompletedActions:(long long)arg1;
- (void)_setNumberOfUnsuccessfullyCompletedActions:(long long)arg1;
- (void)_setResult:(long long)arg1;
- (id)aceCommand;
- (id /* block */)commandCompletion;
- (id)delegate;
- (void)incrementNumberOfStartedActions;
- (void)incrementNumberOfStoppedActions;
- (void)incrementNumberOfSuccessfullyCompletedActions;
- (void)incrementNumberOfUnsuccessfullyCompletedActions;
- (id)initWithAceCommand:(id)arg1 andCompletion:(id /* block */)arg2;
- (long long)numberOfStartedActions;
- (long long)numberOfStoppedActions;
- (long long)numberOfSuccessfullyCompletedActions;
- (long long)numberOfUnsuccessfullyCompletedActions;
- (long long)result;
- (void)setCommandCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
