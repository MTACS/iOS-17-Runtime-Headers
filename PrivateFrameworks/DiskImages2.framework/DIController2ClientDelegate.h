
@interface DIController2ClientDelegate : NSObject <DIController2ClientProtocol> {
    DIDeviceHandle * _deviceHandle;
}

@property (nonatomic, retain) DIDeviceHandle *deviceHandle;

- (void).cxx_destruct;
- (void)attachCompletedWithHandle:(id)arg1 reply:(id /* block */)arg2;
- (id)deviceHandle;
- (void)setDeviceHandle:(id)arg1;

@end
