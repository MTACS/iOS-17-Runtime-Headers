
@interface CRXFFetchUserInfoRequest : NSObject {
    id /* block */  _completion;
    CRXUDispatchQueue * _completionQueue;
    bool  _finished;
    CRXUTimer * _timer;
}

- (void).cxx_destruct;
- (void)finishWithUserInfo:(id)arg1 error:(id)arg2;
- (id)initWithTimeout:(double)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)timerDidFire:(id)arg1;

@end
