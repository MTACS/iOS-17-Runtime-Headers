
@interface _CUTPromise : CUTPromise {
    bool  _done;
    NSObject<OS_dispatch_group> * _group;
    NSObject<OS_dispatch_queue> * _queue;
    CUTResult * _result;
}

@property (nonatomic) bool done;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CUTResult *result;

- (void).cxx_destruct;
- (void)_fulfillWithResult:(id)arg1;
- (bool)done;
- (id)group;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)registerResultBlock:(id /* block */)arg1;
- (id)result;
- (void)setDone:(bool)arg1;
- (void)setGroup:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setResult:(id)arg1;

@end
