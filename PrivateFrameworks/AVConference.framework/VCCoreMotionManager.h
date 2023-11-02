
@interface VCCoreMotionManager : NSObject {
    <VCCoreMotionManagerDelegate> * _coreMotionManagerDelegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    CMMotionActivity * _motionActivity;
    CMMotionActivityManager * _motionActivityManager;
    NSOperationQueue * _motionActivityQueue;
}

@property (readonly) CMMotionActivity *motionActivity;

- (id)coreMotionManagerDelegate;
- (void)dealloc;
- (unsigned char)getMotionActivityValueForMotionActivity:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)motionActivity;
- (void)setCoreMotionManagerDelegate:(id)arg1;
- (void)setMotionActivity:(id)arg1;
- (void)startMonitoringMotionActivity;
- (void)stopMonitoringMotionActivity;

@end
