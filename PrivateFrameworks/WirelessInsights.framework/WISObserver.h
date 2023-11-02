
@interface WISObserver : NSObject {
    <WISObserverDelegate> * _delegate;
    struct shared_ptr<WISObserverConnection> { 
        struct WISObserverConnection {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  observerConnection;
}

@property (nonatomic) <WISObserverDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)setConfiguration:(id)arg1 callback:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2;

@end
