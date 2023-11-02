
@interface AMSDeviceMessengerFilter : NSObject {
    ACAccount * _account;
    long long  _deviceType;
    long long  _messageType;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) long long deviceType;
@property (nonatomic) long long messageType;

- (void).cxx_destruct;
- (id)account;
- (long long)deviceType;
- (bool)matchesMessage:(id)arg1;
- (long long)messageType;
- (void)setAccount:(id)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setMessageType:(long long)arg1;

@end
