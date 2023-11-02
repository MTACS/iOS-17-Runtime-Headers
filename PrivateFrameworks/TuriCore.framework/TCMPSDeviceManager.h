
@interface TCMPSDeviceManager : NSObject {
    <NSObject> * _deviceObserver;
    <MTLDevice> * _preferredDevice;
}

@property (retain) <MTLDevice> *preferredDevice;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)preferredDevice;
- (void)setPreferredDevice:(id)arg1;
- (void)setPreferredDeviceFromDevices:(id)arg1;
- (bool)shouldPreferDevice:(id)arg1 overDevice:(id)arg2;

@end
