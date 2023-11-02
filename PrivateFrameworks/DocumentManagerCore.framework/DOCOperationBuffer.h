
@interface DOCOperationBuffer : NSObject {
    NSString * _label;
    bool  _locked;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool locked;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *targetQueue;

- (void).cxx_destruct;
- (void)buffer:(id /* block */)arg1;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 targetQueue:(id)arg2;
- (id)label;
- (bool)locked;
- (id)queue;
- (void)setLabel:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)signal;
- (id)targetQueue;

@end
