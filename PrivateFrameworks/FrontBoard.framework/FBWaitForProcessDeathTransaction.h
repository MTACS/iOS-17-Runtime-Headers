
@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessManagerObserver> {
    FBProcess * _process;
    double  _timeout;
    BSAbsoluteMachTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBProcess *process;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeout;

- (void).cxx_destruct;
- (void)_begin;
- (bool)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (id)initWithProcess:(id)arg1;
- (id)initWithProcess:(id)arg1 timeout:(double)arg2;
- (id)process;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (double)timeout;

@end
