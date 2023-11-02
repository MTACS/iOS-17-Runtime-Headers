
@interface GCFuture : NSObject {
    _Atomic bool  _activated;
    _Atomic bool  _cancelled;
    struct { 
        unsigned int targetQueueOptional : 1; 
        unsigned int async : 1; 
        unsigned int unused : 6; 
    }  _flags;
    NSString * _label;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _resultOrError;
    BOOL  _state;
}

@property (copy) NSString *label;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)cancelledFuture;
+ (id)futureOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
+ (id)futureOnQueue:(id)arg1 withOptions:(unsigned int)arg2 block:(id /* block */)arg3;
+ (id)futureWithBlock:(id /* block */)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithLabel:(id)arg1 block:(id /* block */)arg2;
+ (id)futureWithLabel:(id)arg1 onQueue:(id)arg2 block:(id /* block */)arg3;
+ (id)futureWithOptions:(unsigned int)arg1 block:(id /* block */)arg2;
+ (id)futureWithResult:(id)arg1;

- (void).cxx_destruct;
- (bool)_checkFinished:(bool)arg1;
- (unsigned long long)_creatorFrame;
- (void)_observeFinishOnQueue:(id)arg1 withOptions:(unsigned int)arg2 qosClass:(unsigned int)arg3 relativePriority:(int)arg4 block:(id /* block */)arg5;
- (bool)_setState:(long long)arg1 result:(id)arg2 error:(id)arg3;
- (id)_thenRequiringState:(long long)arg1 onQueue:(id)arg2 withOptions:(unsigned int)arg3 qosClass:(unsigned int)arg4 relativePriority:(int)arg5 label:(id)arg6 block:(id /* block */)arg7;
- (id)_thenSynchronouslyRequiringState:(long long)arg1 onQueue:(id)arg2 withOptions:(unsigned int)arg3 qosClass:(unsigned int)arg4 relativePriority:(int)arg5 label:(id)arg6 block:(id /* block */)arg7;
- (void)cancel;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)error;
- (id)init;
- (id)initCancelled;
- (id)initOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (id)initOnQueue:(id)arg1 withOptions:(unsigned int)arg2 block:(id /* block */)arg3;
- (id)initWithError:(id)arg1;
- (id)initWithResult:(id)arg1;
- (bool)isFinished;
- (id)label;
- (void)observeCancellation:(id /* block */)arg1;
- (void)observeFailure:(id /* block */)arg1;
- (void)observeFinish:(id /* block */)arg1;
- (void)observeFinishOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (void)observeFinishOnQueue:(id)arg1 withOptions:(unsigned int)arg2 block:(id /* block */)arg3;
- (void)observeFinishOnQueue:(id)arg1 withOptions:(unsigned int)arg2 qosClass:(unsigned int)arg3 relativePriority:(int)arg4 block:(id /* block */)arg5;
- (void)observeFinishWithOptions:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)observeSuccess:(id /* block */)arg1;
- (void)observeSuccessOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (id)redactedDescription;
- (id)result;
- (id)resultIfFinished;
- (void)setLabel:(id)arg1;
- (id)thenOnQueue:(id)arg1 with:(id /* block */)arg2;
- (id)thenOnQueue:(id)arg1 withOptions:(unsigned int)arg2 qosClass:(unsigned int)arg3 relativePriority:(int)arg4 label:(id)arg5 block:(id /* block */)arg6;
- (id)thenOnQueue:(id)arg1 withResult:(id /* block */)arg2;
- (id)thenSynchronouslyOnQueue:(id)arg1 with:(id /* block */)arg2;
- (id)thenSynchronouslyOnQueue:(id)arg1 withOptions:(unsigned int)arg2 qosClass:(unsigned int)arg3 relativePriority:(int)arg4 label:(id)arg5 block:(id /* block */)arg6;
- (id)thenSynchronouslyWith:(id /* block */)arg1;
- (id)thenSynchronouslyWithResult:(id /* block */)arg1;
- (id)thenWith:(id /* block */)arg1;
- (id)thenWithResult:(id /* block */)arg1;
- (long long)waitForResult:(id*)arg1 error:(id*)arg2;
- (long long)waitUntilFinished;

@end
