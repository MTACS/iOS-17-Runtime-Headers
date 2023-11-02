
@interface DTXSharedMemoryTransport : DTXTransport {
    bool  _creator;
    NSObject<OS_dispatch_queue> * _listenQueue;
    struct DTXSharedMemory { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; _Atomic int x8; _Atomic int x9; _Atomic unsigned int x10; _Atomic int x11; _Atomic int x12; _Atomic int x13; _Atomic int x14; unsigned int x15; unsigned int x16; unsigned int x17; BOOL x18[0]; } * _shm;
}

@property (nonatomic) int remotePid;
@property (nonatomic, readonly) struct DTXSharedMemory { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; _Atomic int x8; _Atomic int x9; _Atomic unsigned int x10; _Atomic int x11; _Atomic int x12; _Atomic int x13; _Atomic int x14; unsigned int x15; unsigned int x16; unsigned int x17; BOOL x18[0]; }*sharedMemory;
@property (nonatomic, readonly) unsigned long long totalSharedMemorySize;

+ (id)addressForMemory:(unsigned long long)arg1 inProcess:(int)arg2;
+ (id)addressForPosixSharedMemoryWithName:(id)arg1;
+ (id)schemes;

- (void).cxx_destruct;
- (bool)_setupCreatingSharedMemory:(id)arg1 size:(int)arg2;
- (bool)_setupWithShm:(struct DTXSharedMemory { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; _Atomic int x8; _Atomic int x9; _Atomic unsigned int x10; _Atomic int x11; _Atomic int x12; _Atomic int x13; _Atomic int x14; unsigned int x15; unsigned int x16; unsigned int x17; BOOL x18[0]; }*)arg1 asCreator:(bool)arg2;
- (void)dealloc;
- (void)disconnect;
- (id)initWithLocalName:(id)arg1 size:(int)arg2;
- (id)initWithMappedMemory:(struct DTXSharedMemory { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; _Atomic int x8; _Atomic int x9; _Atomic unsigned int x10; _Atomic int x11; _Atomic int x12; _Atomic int x13; _Atomic int x14; unsigned int x15; unsigned int x16; unsigned int x17; BOOL x18[0]; }*)arg1;
- (id)initWithMemoryAddress:(unsigned long long)arg1 inTask:(unsigned int)arg2;
- (id)initWithRemoteAddress:(id)arg1;
- (id)localAddresses;
- (id)permittedBlockCompressionTypes;
- (int)remotePid;
- (void)setRemotePid:(int)arg1;
- (struct DTXSharedMemory { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; _Atomic int x8; _Atomic int x9; _Atomic unsigned int x10; _Atomic int x11; _Atomic int x12; _Atomic int x13; _Atomic int x14; unsigned int x15; unsigned int x16; unsigned int x17; BOOL x18[0]; }*)sharedMemory;
- (unsigned long long)totalSharedMemorySize;
- (unsigned long long)transmit:(const void*)arg1 ofLength:(unsigned long long)arg2;

@end
