
@interface LAPSPasscodeChangeSystemDispatchAdapter : NSObject <LAPSPasscodeChangeSystem> {
    <LAPSPasscodeChangeSystem> * _system;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performOnBackgroundQueue:(id /* block */)arg1;
- (void)_performOnMainQueue:(id /* block */)arg1;
- (bool)canChangePasscodeWithError:(id*)arg1;
- (void)changePasscode:(id)arg1 to:(id)arg2 completion:(id /* block */)arg3;
- (bool)hasPasscode;
- (id)initWithSystem:(id)arg1;
- (id)initWithSystem:(id)arg1 workQueue:(id)arg2;
- (id)lastPasscodeChange;
- (id)newPasscodeRequest;
- (id)oldPasscodeRequest;
- (void)verifyNewPasscode:(id)arg1 completion:(id /* block */)arg2;
- (void)verifyPasscode:(id)arg1 completion:(id /* block */)arg2;

@end
