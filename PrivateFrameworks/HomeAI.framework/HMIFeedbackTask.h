
@interface HMIFeedbackTask : HMITask {
    HMFOperation * _operation;
}

- (void).cxx_destruct;
- (id)initWithTaskID:(int)arg1 cameraProfileUUID:(id)arg2 clipUUID:(id)arg3;
- (void)mainInsideAutoreleasePool;

@end
