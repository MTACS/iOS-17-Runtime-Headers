
@interface MRExternalDeviceManager : NSObject {
    NSPointerArray * _devicesPointerArray;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSArray *allDevices;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)allDevices;
- (void)clearDevices;
- (id)deviceWithIdentifier:(id)arg1;
- (id)init;
- (void)registerDevice:(id)arg1;

@end
