
@interface HUPresenceCurrentUserLocationDevice : NSObject {
    HMDevice * _customDevice;
    unsigned long long  _type;
}

@property (nonatomic, readonly) HMDevice *customDevice;
@property (nonatomic, readonly) unsigned long long type;

+ (id)FMFDevice;
+ (id)currentDevice;
+ (id)customDeviceWithHMDevice:(id)arg1;

- (void).cxx_destruct;
- (id)customDevice;
- (id)initWithType:(unsigned long long)arg1 customDevice:(id)arg2;
- (unsigned long long)type;

@end
