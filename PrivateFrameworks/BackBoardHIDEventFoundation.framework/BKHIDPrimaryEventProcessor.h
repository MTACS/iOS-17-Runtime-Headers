
@interface BKHIDPrimaryEventProcessor : NSObject <BKHIDBufferedEventProcessor, BKHIDEventProcessor> {
    NSSet * _allBufferedEventProcessors;
    NSArray * _bufferedSubProcessors;
    <BKHIDBufferedEventProcessor> * _defaultBufferedEventProcessor;
    <BKHIDEventProcessor> * _defaultProcessor;
    NSArray * _subProcessors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_eventProcessorsForEventType:(unsigned int)arg1;
- (void)bufferDidEndDraining:(id)arg1;
- (void)bufferWillBeginDraining:(id)arg1;
- (void)bufferingDidAddNewBuffers:(id)arg1;
- (void)conformsToBKHIDBufferedEventProcessor;
- (id)initWithSubProcessors:(id)arg1 defaultProcessor:(id)arg2;
- (void)postEvent:(struct __IOHIDEvent { }*)arg1 withContext:(id)arg2 toResolution:(id)arg3 fromSequence:(id)arg4;
- (long long)processEvent:(inout struct __IOHIDEvent {}**)arg1 sender:(id)arg2 dispatcher:(id)arg3;
- (long long)processEvent:(inout struct __IOHIDEvent {}**)arg1 withContext:(id)arg2 buffer:(id)arg3 sequence:(id)arg4 sender:(id)arg5 dispatcher:(id)arg6 resolution:(id)arg7;

@end
