
@interface CLFindMyAccessoryRangingManager : NSObject {
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { 
        struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> { 
            struct CLConnectionClient {} *__value_; 
        } __ptr_; 
    }  _connection;
    <CLFindMyAccessoryRangingManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

@property (nonatomic) <CLFindMyAccessoryRangingManagerDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connectToDevice:(id)arg1;
- (id)delegate;
- (void)disconnectFromDevice:(id)arg1;
- (void)fetchFirmwareVersionFromDevice:(id)arg1;
- (void)handleInterruption;
- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)init;
- (void)initRoseWithParameters:(id)arg1 onDevice:(id)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)prepareForStartRangingOnDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRoseRangingParameters:(id)arg1 onDevice:(id)arg2;
- (void)startEventCounterOnDevice:(id)arg1;
- (void)startRangingWithParameters:(id)arg1 onDevice:(id)arg2;
- (void)stopEventCounterOnDevice:(id)arg1;
- (void)stopRangingOnDevice:(id)arg1;
- (void)stopRoseWithParameters:(id)arg1 onDevice:(id)arg2;

@end
