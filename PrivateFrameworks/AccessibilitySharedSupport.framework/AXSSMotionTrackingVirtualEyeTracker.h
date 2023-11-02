
@interface AXSSMotionTrackingVirtualEyeTracker : NSObject {
    bool  __activated;
    HIDUserDevice * __hidUserDevice;
    NSObject<OS_dispatch_queue> * __hidUserDeviceQueue;
    NSObject<OS_dispatch_queue> * __reportingQueue;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _screenBounds;
}

@property (nonatomic) bool _activated;
@property (nonatomic, retain) HIDUserDevice *_hidUserDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_hidUserDeviceQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_reportingQueue;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;

+ (id)_eyeTrackerHIDDeviceProperties;
+ (id)_eyeTrackerHIDReportDescriptorData;
+ (id)_hidReportWithButtonDown:(bool)arg1;
+ (id)_hidReportWithPoint:(struct CGPoint { double x1; double x2; })arg1 reportID:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 version:(unsigned long long)arg4;
+ (id)_hidReportWithStatusChange:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_activateOnReportingQueue;
- (bool)_activated;
- (void)_changeStatusOnReportingQueueTo:(unsigned long long)arg1;
- (void)_clickOnReportingQueueWithButtonDown:(bool)arg1;
- (void)_deactivateOnReportingQueue;
- (id)_hidUserDevice;
- (id)_hidUserDeviceQueue;
- (void)_moveOnReportingQueueToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_reportingQueue;
- (void)activate;
- (void)changeStatusTo:(unsigned long long)arg1;
- (void)click;
- (void)deactivate;
- (void)dealloc;
- (id)initWithScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_activated:(bool)arg1;
- (void)set_hidUserDevice:(id)arg1;
- (void)set_hidUserDeviceQueue:(id)arg1;
- (void)set_reportingQueue:(id)arg1;

@end
