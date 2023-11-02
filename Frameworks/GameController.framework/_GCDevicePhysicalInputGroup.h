
@interface _GCDevicePhysicalInputGroup : NSObject <_GCDevicePhysicalInputDataSource> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <_GCDevicePhysicalInputGroupDataSource> * _dataSource;
    _GCDevicePhysicalInputBase * _defaultPhysicalInput;
    bool  _hasQueueOverride;
    bool  _isSnapshot;
    NSDictionary * _physicalInputs;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithPhysicalInputs:(id)arg1;
- (void)physicalInput:(id)arg1 setQueue:(id)arg2;
- (void)physicalInputPoll:(id)arg1 forLatest:(bool)arg2;
- (id)physicalInputQueue:(id)arg1;
- (void)physicalInputTransactionQueueDepthDidChange:(id)arg1;
- (id)physicalInputWithAttributes:(id)arg1;
- (void)setDevice:(id)arg1;

@end
