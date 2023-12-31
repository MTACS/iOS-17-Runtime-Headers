
@interface IMSimulatedAccount : IMAccount {
    IMHandle * _loginHandle;
}

@property (nonatomic, retain) IMHandle *loginHandle;

- (void).cxx_destruct;
- (bool)isConnected;
- (bool)isOperational;
- (id)loginHandle;
- (id)loginIMHandle;
- (void)setLoginHandle:(id)arg1;
- (bool)supportsRegistration;

@end
