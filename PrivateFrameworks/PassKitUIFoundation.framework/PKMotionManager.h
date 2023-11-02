
@interface PKMotionManager : NSObject {
    NSHashTable * _clients;
    bool  _monitoring;
    CMDeviceMotion * _motion;
    CMMotionManager * _motionManager;
}

@property (getter=isMonitoring, nonatomic, readonly) bool monitoring;
@property (nonatomic, readonly) CMDeviceMotion *motion;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (id)init;
- (bool)isMonitoring;
- (id)motion;
- (void)registerClient:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (void)updateWithMotion:(id)arg1;

@end
