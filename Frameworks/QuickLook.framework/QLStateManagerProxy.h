
@interface QLStateManagerProxy : NSObject {
    <QLPreviewControllerStateProtocolHostOnly> * _stateManager;
}

@property <QLPreviewControllerStateProtocolHostOnly> *stateManager;

- (void).cxx_destruct;
- (void)dropMethod;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setStateManager:(id)arg1;
- (id)stateManager;

@end
