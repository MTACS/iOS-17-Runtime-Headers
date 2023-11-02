
@interface BKHIDEventDeliverySequence : NSObject <BSDescriptionStreamable, NSCopying> {
    id  _additionalContext;
    NSMutableSet * _buffersWithIncompleteSequences;
    NSMutableSet * _currentBuffers;
    NSMutableSet * _currentResolutions;
    BKHIDEventDeliveryManager * _deliveryManager;
    <BKHIDEventDispatcher> * _dispatcher;
    id  _firstAdditionalContext;
    struct __IOHIDEvent { } * _firstEvent;
    BKSHIDEventKeyCommand * _keyCommand;
    <BKHIDBufferedEventProcessor> * _processor;
    NSMutableSet * _repostedToBuffers;
    NSMutableSet * _resolutionsWithIncompleteSequences;
    <BKHIDEventSenderInfo> * _senderInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <BKHIDEventDispatcher> *dispatcher;
@property (readonly) id firstAdditionalContext;
@property (readonly) unsigned long long hash;
@property (readonly) BKSHIDEventKeyCommand *keyCommand;
@property (readonly) <BKHIDBufferedEventProcessor> *processor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resolveDispatchTargetsToBuffers;
- (void)_resolveDispatchTargetsToBuffers:(id)arg1 repostFirstEvent:(bool)arg2;
- (void)appendDescriptionToFormatter:(id)arg1;
- (void)bufferDidDrain:(id)arg1;
- (id)buffers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dispatcher;
- (id)firstAdditionalContext;
- (id)initWithProcessor:(id)arg1 dispatcher:(id)arg2 senderInfo:(id)arg3 additionalContext:(id)arg4 keyCommand:(id)arg5 deliveryManager:(id)arg6 resolutions:(id)arg7 buffers:(id)arg8;
- (id)keyCommand;
- (void)postEvent:(struct __IOHIDEvent { }*)arg1 position:(long long)arg2 additionalContext:(id)arg3;
- (void)postEvent:(struct __IOHIDEvent { }*)arg1 position:(long long)arg2 additionalContext:(id)arg3 fromBuffer:(id)arg4 toResolution:(id)arg5;
- (id)processor;
- (void)repostFirstEventToBufferedTargets:(id)arg1;
- (id)resolutions;

@end
