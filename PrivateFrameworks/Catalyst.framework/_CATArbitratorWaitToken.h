
@interface _CATArbitratorWaitToken : NSObject {
    id /* block */  mCompletionBlock;
    NSObject<OS_dispatch_queue> * mDelegateQueue;
    NSObject<OS_dispatch_group> * mGroup;
    _Atomic int  mState;
    NSMutableDictionary * mTokenByKey;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDelegateQueue:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)performCompletionBlock;
- (void)resume;
- (void)waitForRegistrationEntry:(id)arg1 forKey:(id)arg2 exclusive:(bool)arg3;
- (bool)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2;

@end
