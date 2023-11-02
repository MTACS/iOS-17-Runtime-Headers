
@interface GCOperation : GCFuture {
    id /* block */  _asyncBlock;
    struct ContinuationList { 
        struct ObserverList { 
            struct Continuation {} *stqh_first; 
            struct Continuation {} **stqh_last; 
        } _continuations; 
    }  _continuations;
    NSObject<OS_voucher> * _creationVoucher;
    unsigned long long  _creatorFrame;
    NSObject<OS_dispatch_queue> * _privateQueue;
    unsigned int  _qos;
    int  _relativePriority;
    id /* block */  _syncBlock;
    NSObject<OS_dispatch_object> * _syncBoostQueueOrAsyncGroup;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (nonatomic, copy) id /* block */ asyncBlock;
@property (nonatomic, copy) id /* block */ syncBlock;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_checkFinished:(bool)arg1;
- (unsigned long long)_creatorFrame;
- (void)_observeFinishOnQueue:(id)arg1 withOptions:(unsigned int)arg2 qosClass:(unsigned int)arg3 relativePriority:(int)arg4 block:(id /* block */)arg5;
- (bool)_setState:(long long)arg1 result:(id)arg2 error:(id)arg3;
- (id)_thenSynchronouslyRequiringState:(long long)arg1 onQueue:(id)arg2 withOptions:(unsigned int)arg3 qosClass:(unsigned int)arg4 relativePriority:(int)arg5 label:(id)arg6 block:(id /* block */)arg7;
- (id)activate;
- (id /* block */)asyncBlock;
- (id)debugDescription;
- (id)initCancelled;
- (id)initOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (id)initOnQueue:(id)arg1 withOptions:(unsigned int)arg2;
- (id)initOnQueue:(id)arg1 withOptions:(unsigned int)arg2 block:(id /* block */)arg3;
- (id)initWithError:(id)arg1;
- (id)initWithResult:(id)arg1;
- (void)setAsyncBlock:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setSyncBlock:(id /* block */)arg1;
- (id)startAsynchronously;
- (id /* block */)syncBlock;

@end
