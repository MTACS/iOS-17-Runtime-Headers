
@interface IRReplayWriter : NSObject <IRDeallocSync> {
    NSMutableSet * _bufferedReplayEvents;
    IRServiceStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IRServiceStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)deallocSync;
- (id)initWithServiceStore:(id)arg1;
- (id)store;
- (void)writeReplayEventWithReason:(id)arg1 SystemState:(id)arg2 miloLslPrediction:(id)arg3 candidatesContainerDO:(id)arg4 nearbyDeviceContainerDO:(id)arg5 date:(id)arg6;

@end
