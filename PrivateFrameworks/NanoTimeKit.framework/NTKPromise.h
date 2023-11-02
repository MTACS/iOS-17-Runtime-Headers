
@interface NTKPromise : NSObject {
    unsigned int  _bgPriority;
    unsigned int  _fgPriority;
    NSObject<OS_dispatch_queue> * _loaderQueue;
    id  _loaderQueue_loadedObject;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _lock_loadedObject;
    unsigned long long  _lock_promiseState;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) id object;

+ (id)metalPipelinePromiseNamed:(id)arg1 withBlock:(id /* block */)arg2;
+ (id)promiseNamed:(id)arg1 withBackgroundPriority:(unsigned int)arg2 foregroundPriority:(unsigned int)arg3 block:(id /* block */)arg4;
+ (id)promiseNamed:(id)arg1 withBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_beginLoadingBlock:(id /* block */)arg1;
- (id)initWithName:(id)arg1 backgroundPriority:(unsigned int)arg2 foregroundPriority:(unsigned int)arg3 block:(id /* block */)arg4;
- (id)initWithName:(id)arg1 block:(id /* block */)arg2;
- (id)name;
- (id)object;

@end
