
@interface AVAudioIOController_iOS : NSObject <AVAudioIOController> {
    struct shared_ptr<as::client::DeviceTimeClient> { 
        struct DeviceTimeClient {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _deviceTimeClient;
    struct optional<(anonymous namespace)::IOControllerImpl>=""(?="__null_state_"c"__val_"{IOControllerImpl="mSession"@"AVAudioSession""mIsDecoupledInput"B"mXPCConnection"{weak_ptr<as::client::XPCConnection>="__ptr_"^{XPCConnection {}  impl;
}

@property (nonatomic, readonly) struct AVAudioIOPeriod { double x1; double x2; unsigned long long x3; float x4; } IOPeriod;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct AVAudioTimeInterval { double x1; double x2; unsigned long long x3; } dynamicLatency;
@property (readonly) unsigned long long hash;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsDynamicLatency;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct AVAudioIOPeriod { double x1; double x2; unsigned long long x3; float x4; })IOPeriod;
- (long long)createIOEventBlock:(id /* block */)arg1;
- (struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; })currentTime;
- (void)destroyIOEventBlock:(long long)arg1;
- (struct AVAudioTimeInterval { double x1; double x2; unsigned long long x3; })dynamicLatency;
- (id)initWithSession:(id)arg1 xpcConnection:(struct shared_ptr<as::client::XPCConnection> { struct XPCConnection {} *x1; struct __shared_weak_count {} *x2; })arg2 deviceTimeClient:(struct shared_ptr<as::client::DeviceTimeClient> { struct DeviceTimeClient {} *x1; struct __shared_weak_count {} *x2; })arg3 timingSlot:(unsigned int)arg4 isDecoupledInput:(bool)arg5;
- (bool)isRunning;
- (struct AudioPresentationTimeStamp { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; double x8; double x9; })presentationTime;
- (void)privateDispatchIOControllerEvent:(unsigned long long)arg1;
- (void)setTimingSlot:(unsigned int)arg1;
- (bool)supportsDynamicLatency;

@end
