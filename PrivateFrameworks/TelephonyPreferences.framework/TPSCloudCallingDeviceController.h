
@interface TPSCloudCallingDeviceController : NSObject <TUCallCapabilitiesDelegatePrivate> {
    <TPSCloudCallingDeviceControllerDelegate> * _delegate;
    NSArray * _devices;
    bool  _enabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TPSCloudCallingDeviceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)devices;
- (void)didChangeCloudCallingDevices;
- (bool)enabled;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end
