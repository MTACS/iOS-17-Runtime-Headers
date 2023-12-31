
@interface HMDHomeObjectChangeHandler : HMFObject {
    HMDHome * _home;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)handleObjectAdd:(id)arg1 message:(id)arg2;
- (void)handleObjectRemove:(id)arg1 message:(id)arg2;
- (void)handleObjectUpdate:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)workQueue;

@end
