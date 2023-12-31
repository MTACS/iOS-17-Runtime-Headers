
@interface TKPowerMonitor : NSObject {
    bool  _awaken;
    unsigned int  _handle;
    unsigned int  _kernelPort;
    struct IONotificationPort { } * _portRef;
    NSObject<OS_dispatch_queue> * _queue;
}

@property bool awaken;
@property unsigned int kernelPort;

+ (id)defaultMonitor;

- (void).cxx_destruct;
- (bool)awaken;
- (id)init;
- (unsigned int)kernelPort;
- (void)setAwaken:(bool)arg1;
- (void)setKernelPort:(unsigned int)arg1;

@end
