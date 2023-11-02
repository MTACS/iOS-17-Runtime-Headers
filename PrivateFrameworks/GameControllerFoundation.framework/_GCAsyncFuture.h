
@interface _GCAsyncFuture : GCFuture {
    NSObject<OS_dispatch_group> * _condGroup;
    struct ContinuationList { 
        struct ObserverList { 
            struct Continuation {} *stqh_first; 
            struct Continuation {} **stqh_last; 
        } _continuations; 
    }  _continuations;
    NSObject<OS_voucher> * _creationVoucher;
    unsigned long long  _creatorFrame;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_checkFinished:(bool)arg1;
- (unsigned long long)_creatorFrame;
- (void)_observeFinishOnQueue:(id)arg1 withOptions:(unsigned int)arg2 qosClass:(unsigned int)arg3 relativePriority:(int)arg4 block:(id /* block */)arg5;
- (bool)_setState:(long long)arg1 result:(id)arg2 error:(id)arg3;
- (id)debugDescription;

@end
