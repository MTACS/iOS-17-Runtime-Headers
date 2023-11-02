
@interface AFKeyValueObservingDeliveryOptions : NSObject {
    bool  _asynchronous;
    unsigned int  _qosClass;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly) unsigned int qosClass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (bool)asynchronous;
- (id)initWithQueue:(id)arg1 qosClass:(unsigned int)arg2 asynchronous:(bool)arg3;
- (unsigned int)qosClass;
- (id)queue;

@end
