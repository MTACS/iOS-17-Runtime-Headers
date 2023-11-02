
@interface AVAudioTimeObserverImpl : NSObject <AVAudioTimeObserver> {
    struct shared_ptr<as::client::DeviceTimeClient> { 
        struct DeviceTimeClient {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _deviceTimeClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct AVAudioTimeInterval { double x1; double x2; unsigned long long x3; })currentLatency;
- (struct AudioPresentationTimeStamp { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; double x8; double x9; })currentPresentationTime;
- (struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; })currentTime;
- (struct shared_ptr<as::client::DeviceTimeClient> { struct DeviceTimeClient {} *x1; struct __shared_weak_count {} *x2; })deviceTimeClient;
- (id)initWithDeviceTimeClient:(struct shared_ptr<as::client::DeviceTimeClient> { struct DeviceTimeClient {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)isLatencyDynamic;

@end
