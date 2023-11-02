
@interface MRSuspendDisconnectionPauseConfiguration : NSObject {
    NSString * _deviceAddress;
}

@property (nonatomic, copy) NSString *deviceAddress;

- (void).cxx_destruct;
- (id)XPCMessage;
- (id)deviceAddress;
- (id)initWithXPCMessage:(id)arg1;
- (void)setDeviceAddress:(id)arg1;

@end
