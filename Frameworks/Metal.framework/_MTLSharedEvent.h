
@interface _MTLSharedEvent : IOSurfaceSharedEvent <MTLSharedEventSPI> {
    NSString * _label;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _labelLock;
    unsigned long long  _labelTraceID;
}

@property (nonatomic, readonly) IOSurfaceSharedEvent *IOSurfaceSharedEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) unsigned long long labelTraceID;
@property unsigned long long signaledValue;
@property (readonly) Class superclass;
@property (readonly) bool supportsRollback;

// Image: /System/Library/Frameworks/Metal.framework/Metal

+ (bool)supportsSecureCoding;

- (id)IOSurfaceSharedEvent;
- (void)dealloc;
- (id)device;
- (unsigned int)encodeConditionalEventAbortCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned short x2; unsigned short x3; unsigned long long x4; }*)arg1;
- (unsigned int)encodeKernelSignalEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned short x2; unsigned short x3; unsigned long long x4; }*)arg1 value:(unsigned long long)arg2;
- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned short x2; unsigned short x3; unsigned long long x4; }*)arg1 value:(unsigned long long)arg2;
- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned short x2; unsigned short x3; unsigned long long x4; }*)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (id)initWithMachPort:(unsigned int)arg1;
- (id)initWithOptions:(long long)arg1;
- (id)initWithSharedEventHandle:(id)arg1;
- (id)label;
- (unsigned long long)labelTraceID;
- (id)newSharedEventHandle;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(id /* block */)arg3;
- (id)retainedLabel;
- (void)setLabel:(id)arg1;
- (bool)supportsRollback;

// Image: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU

- (unsigned int)_encodeIOGPUKernelConditionalEventAbortCommandArgs:(struct IOGPUKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1;
- (unsigned int)_encodeIOGPUKernelSignalEventAgentCommandArgs:(struct IOGPUKernelCommandSignalEventAgentArgs { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; }*)arg1 value:(unsigned long long)arg2 agentMask:(unsigned long long)arg3;
- (unsigned int)_encodeIOGPUKernelSignalEventCommandArgs:(struct IOGPUKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 value:(unsigned long long)arg2;
- (unsigned int)_encodeIOGPUKernelSignalEventScheduledCommandArgs:(struct IOGPUKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 value:(unsigned long long)arg2;
- (unsigned int)_encodeIOGPUKernelWaitEventCommandArgs:(struct IOGPUKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;

@end
