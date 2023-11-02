
@interface BWAmbientLightSensor : NSObject {
    NSObject<OS_dispatch_queue> * _alsQueue;
    BrightnessSystemClient * _brightnessSystemClient;
    NSObject<OS_dispatch_semaphore> * _exitSemaphore;
    struct __IOHIDEventSystemClient { } * _hidSystemClient;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _luxLevel;
    float  _rearLuxLevel;
}

@property (nonatomic, readonly) int luxLevel;
@property (nonatomic, readonly) float rearLuxLevel;

+ (void)initialize;

- (void)dealloc;
- (void)forceUpdateRearLuxLevel;
- (id)init;
- (int)luxLevel;
- (float)rearLuxLevel;

@end
