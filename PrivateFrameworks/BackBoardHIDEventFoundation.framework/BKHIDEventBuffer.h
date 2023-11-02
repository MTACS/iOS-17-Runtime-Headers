
@interface BKHIDEventBuffer : NSObject <BSDescriptionStreamable, BSInvalidatable> {
    bool  _allBufferingClientsTerminated;
    NSMutableArray * _buffer;
    NSSet * _bufferingPIDs;
    BKSHIDEventDispatchingTarget * _dispatchTarget;
    bool  _invalidated;
}

@property (nonatomic) bool allBufferingClientsTerminated;
@property (nonatomic, retain) NSSet *bufferingPIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) BKSHIDEventDispatchingTarget *dispatchTarget;
@property (nonatomic, readonly) bool hasEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_test_peekAllEvents;
- (id)_test_peekAllIOHIDEvents;
- (bool)allBufferingClientsTerminated;
- (void)appendDescriptionToFormatter:(id)arg1;
- (void)appendEvent:(struct __IOHIDEvent { }*)arg1 sender:(id)arg2 sequence:(id)arg3 additionalContext:(id)arg4;
- (id)bufferingPIDs;
- (void)dealloc;
- (id)description;
- (id)dispatchTarget;
- (id)drainAllEvents;
- (bool)hasEvents;
- (id)initWithDispatchTarget:(id)arg1;
- (void)invalidate;
- (void)setAllBufferingClientsTerminated:(bool)arg1;
- (void)setBufferingPIDs:(id)arg1;

@end
