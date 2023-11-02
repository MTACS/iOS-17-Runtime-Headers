
@interface IOGPUMTLEvent : NSObject {
    struct __IOGPUDevice { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; unsigned int x2; unsigned int x3; unsigned int *x4; unsigned int **x5; int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; struct os_unfair_lock_s { unsigned int x_11_1_1; } x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; struct IOGPUDeviceCommPage {} *x16; struct IOGPUClientSharedGlobalRO {} *x17; id /* block */ x18; struct os_unfair_lock_s { unsigned int x_19_1_1; } x19; struct shmemlog_list { struct _s_shmemlog_ {} *x_20_1_1; } x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; struct IOGPUDeviceConfigData { unsigned int x_24_1_1; unsigned int x_24_1_2; unsigned long long x_24_1_3; unsigned long long x_24_1_4; unsigned int x_24_1_5; unsigned int x_24_1_6; unsigned long long x_24_1_7; unsigned long long x_24_1_8; unsigned long long x_24_1_9; unsigned int x_24_1_10; unsigned int x_24_1_11; } x24; } * _deviceRef;
    bool  _enableBarrier;
    unsigned int  _eventName;
    unsigned long long  _eventOptions;
    unsigned long long  _globalTraceObjectID;
}

@property (nonatomic) bool enableBarrier;
@property (nonatomic, readonly) bool supportsRollback;

- (unsigned int)_encodeIOGPUKernelConditionalEventAbortCommandArgs:(struct IOGPUKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1;
- (unsigned int)_encodeIOGPUKernelSignalEventAgentCommandArgs:(struct IOGPUKernelCommandSignalEventAgentArgs { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; }*)arg1 value:(unsigned long long)arg2 agentMask:(unsigned long long)arg3;
- (unsigned int)_encodeIOGPUKernelSignalEventCommandArgs:(struct IOGPUKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 value:(unsigned long long)arg2;
- (unsigned int)_encodeIOGPUKernelSignalEventScheduledCommandArgs:(struct IOGPUKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1;
- (unsigned int)_encodeIOGPUKernelWaitEventCommandArgs:(struct IOGPUKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (void)dealloc;
- (bool)enableBarrier;
- (id)initWithDeviceRef:(struct __IOGPUDevice { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; unsigned int x2; unsigned int x3; unsigned int *x4; unsigned int **x5; int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; struct os_unfair_lock_s { unsigned int x_11_1_1; } x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; struct IOGPUDeviceCommPage {} *x16; struct IOGPUClientSharedGlobalRO {} *x17; id /* block */ x18; struct os_unfair_lock_s { unsigned int x_19_1_1; } x19; struct shmemlog_list { struct _s_shmemlog_ {} *x_20_1_1; } x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; struct IOGPUDeviceConfigData { unsigned int x_24_1_1; unsigned int x_24_1_2; unsigned long long x_24_1_3; unsigned long long x_24_1_4; unsigned int x_24_1_5; unsigned int x_24_1_6; unsigned long long x_24_1_7; unsigned long long x_24_1_8; unsigned long long x_24_1_9; unsigned int x_24_1_10; unsigned int x_24_1_11; } x24; }*)arg1;
- (id)initWithDeviceRef:(struct __IOGPUDevice { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; unsigned int x2; unsigned int x3; unsigned int *x4; unsigned int **x5; int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; struct os_unfair_lock_s { unsigned int x_11_1_1; } x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; struct IOGPUDeviceCommPage {} *x16; struct IOGPUClientSharedGlobalRO {} *x17; id /* block */ x18; struct os_unfair_lock_s { unsigned int x_19_1_1; } x19; struct shmemlog_list { struct _s_shmemlog_ {} *x_20_1_1; } x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; struct IOGPUDeviceConfigData { unsigned int x_24_1_1; unsigned int x_24_1_2; unsigned long long x_24_1_3; unsigned long long x_24_1_4; unsigned int x_24_1_5; unsigned int x_24_1_6; unsigned long long x_24_1_7; unsigned long long x_24_1_8; unsigned long long x_24_1_9; unsigned int x_24_1_10; unsigned int x_24_1_11; } x24; }*)arg1 options:(unsigned long long)arg2;
- (void)setEnableBarrier:(bool)arg1;
- (bool)supportsRollback;

@end
