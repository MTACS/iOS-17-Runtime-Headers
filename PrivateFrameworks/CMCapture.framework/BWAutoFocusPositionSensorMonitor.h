
@interface BWAutoFocusPositionSensorMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _apsMonitorQueue;
    FigCaptureDisplayLayoutMonitor * _displayLayoutMonitor;
}

+ (void)clientHasBeenBackgrounded;
+ (void)initialize;
+ (void)logStillImageAPSStatistics:(id)arg1;
+ (void)logVideoRecordingAPSStatistics:(struct BWAPSStatistics { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; }*)arg1;
+ (void)processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;

@end
