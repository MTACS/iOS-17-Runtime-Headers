
@interface NRDeviceCollectionHistoryObserverWrapper : NSObject {
    id /* block */  _observer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ observer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)observer;
- (id)queue;
- (void)setObserver:(id /* block */)arg1;
- (void)setQueue:(id)arg1;

@end
