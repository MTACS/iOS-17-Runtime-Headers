
@interface MRUVirtualHearingAidDevice : MRAVOutputDevice {
    MRAVOutputDeviceDescription * _deviceDescription;
}

@property (nonatomic, readonly) MRAVOutputDeviceDescription *deviceDescription;

- (void).cxx_destruct;
- (id)deviceDescription;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (id)initWithDeviceDescription:(id)arg1;
- (id)name;
- (id)uid;

@end
