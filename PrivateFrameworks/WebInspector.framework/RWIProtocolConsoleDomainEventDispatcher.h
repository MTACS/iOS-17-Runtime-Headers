
@interface RWIProtocolConsoleDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
}

- (void)heapSnapshotWithTimestamp:(double)arg1 snapshotData:(id)arg2 title:(id*)arg3;
- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;
- (void)messageAddedWithMessage:(id)arg1;
- (void)messageRepeatCountUpdatedWithCount:(int)arg1 timestamp:(double*)arg2;
- (void)messagesClearedWithReason:(long long)arg1;

@end
