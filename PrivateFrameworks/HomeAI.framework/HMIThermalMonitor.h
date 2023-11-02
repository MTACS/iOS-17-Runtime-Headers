
@interface HMIThermalMonitor : HMFObject {
    struct __IOHIDEventSystemClient { } * _client;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableDictionary * _services;
    unsigned long long  _thermalLevel;
    int  _thermalLevelNotificationToken;
}

@property (readonly) NSMutableDictionary *services;
@property (readonly) unsigned long long thermalLevel;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateThermalLevel;
- (void)dealloc;
- (id)init;
- (bool)readMaxValue:(double*)arg1;
- (bool)readValueFromSensor:(int)arg1 value:(double*)arg2;
- (id)services;
- (unsigned long long)thermalLevel;

@end
