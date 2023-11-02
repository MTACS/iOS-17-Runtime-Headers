
@interface NRMutableStateBaseObserverWrapper : NSObject {
    id /* block */  _observer;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;

@end
