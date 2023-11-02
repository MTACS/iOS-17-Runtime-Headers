
@interface XRMainThreadSpace : XRSpace {
    NSMutableSet * _mainThreadOps;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_activeRunLoopModes;
- (void)_executeOp:(id)arg1;
- (void)_queueOperationToRunOnMainThread:(id)arg1;
- (id)_scheduleOperationFromCurrentQueue:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (bool)isSerial;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)spaceName;

@end
