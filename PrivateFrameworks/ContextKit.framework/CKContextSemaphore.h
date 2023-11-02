
@interface CKContextSemaphore : NSObject <NSSecureCoding> {
    unsigned int  _sema;
    bool  _semaOwner;
    struct { _Atomic unsigned int x1; _Atomic unsigned int x2; _Atomic unsigned int x3; _Atomic unsigned int x4; _Atomic int x5; _Atomic int x6; _Atomic unsigned long long x7; _Atomic unsigned int x8; _Atomic unsigned int x9; } * _shm;
    NSObject<OS_xpc_object> * _shmObject;
    unsigned long long  _shmSize;
}

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activeGauge;
- (bool)busy;
- (void)dealloc;
- (void)decPending;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)gauge;
- (void)incPending;
- (id)initSemaphoreForXPCService;
- (id)initWithCoder:(id)arg1;
- (void)notify;
- (void)notifyAll;
- (unsigned long long)numAcquired;
- (long long)pending;
- (long long)pendingExceptionsCount;
- (unsigned long long)requestsServed;
- (void)resetPending;
- (void)setActiveGauge:(unsigned long long)arg1;
- (unsigned long long)sharedMemorySize;
- (bool)tryAcquireNeedsIncPending:(bool)arg1;
- (long long)waitFor:(double)arg1;

@end
