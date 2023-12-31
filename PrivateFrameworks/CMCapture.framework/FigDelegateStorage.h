
@interface FigDelegateStorage : NSObject {
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly) id delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;

+ (void)initialize;

- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (void)invokeDelegateCallbackWithBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end
