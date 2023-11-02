
@interface HAPEasyConfigDevice : EasyConfigDevice {
    HAPAccessoryServerIP * _server;
}

@property (nonatomic) HAPAccessoryServerIP *server;

- (void).cxx_destruct;
- (id)initWithDeviceInfo:(id)arg1 server:(id)arg2;
- (id)server;
- (void)setServer:(id)arg1;

@end
