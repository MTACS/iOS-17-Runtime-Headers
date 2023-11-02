
@interface IOAccelMTLEvent : NSObject {
    unsigned int  _eventName;
    unsigned long long  _eventOptions;
    unsigned long long  _globalTraceObjectID;
    struct __IOAccelShared { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __IOAccelDevice {} *x2; unsigned int x3; id /* block */ x4; unsigned long long x5; struct os_unfair_lock_s { unsigned int x_6_1_1; } x6; struct IOAcceldirtyRingRO {} *x7; struct IOAcceldirtyRingRW {} *x8; struct IOAccelDirtyResourceCommand {} *x9; unsigned int x10; struct os_unfair_lock_s { unsigned int x_11_1_1; } x11; struct shmemlog_list { struct _s_shmemlog_ {} *x_12_1_1; } x12; unsigned long long *x13; } * _sharedRef;
}

@property (readonly) bool supportsRollback;

- (void)dealloc;
- (unsigned int)encodeKernelSignalEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned short x2; unsigned short x3; unsigned long long x4; }*)arg1 value:(unsigned long long)arg2;
- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned short x2; unsigned short x3; unsigned long long x4; }*)arg1;
- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned short x2; unsigned short x3; unsigned long long x4; }*)arg1 value:(unsigned long long)arg2;
- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned short x2; unsigned short x3; unsigned long long x4; }*)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (id)initWithShared:(struct __IOAccelShared { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __IOAccelDevice {} *x2; unsigned int x3; id /* block */ x4; unsigned long long x5; struct os_unfair_lock_s { unsigned int x_6_1_1; } x6; struct IOAcceldirtyRingRO {} *x7; struct IOAcceldirtyRingRW {} *x8; struct IOAccelDirtyResourceCommand {} *x9; unsigned int x10; struct os_unfair_lock_s { unsigned int x_11_1_1; } x11; struct shmemlog_list { struct _s_shmemlog_ {} *x_12_1_1; } x12; unsigned long long *x13; }*)arg1;
- (id)initWithShared:(struct __IOAccelShared { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __IOAccelDevice {} *x2; unsigned int x3; id /* block */ x4; unsigned long long x5; struct os_unfair_lock_s { unsigned int x_6_1_1; } x6; struct IOAcceldirtyRingRO {} *x7; struct IOAcceldirtyRingRW {} *x8; struct IOAccelDirtyResourceCommand {} *x9; unsigned int x10; struct os_unfair_lock_s { unsigned int x_11_1_1; } x11; struct shmemlog_list { struct _s_shmemlog_ {} *x_12_1_1; } x12; unsigned long long *x13; }*)arg1 options:(unsigned long long)arg2;
- (bool)supportsRollback;

@end
