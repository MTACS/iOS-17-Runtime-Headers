
@interface PKSEConsistencyCheckRequestedAction : NSObject {
    long long  _actions;
    PKSECredentialAddress * _address;
    PKSEConsistencyCheckDeviceCredential * _deviceCredential;
}

@property (nonatomic, readonly) long long actions;
@property (nonatomic, readonly) PKSECredentialAddress *address;
@property (nonatomic, readonly) PKSEConsistencyCheckDeviceCredential *deviceCredential;

- (void).cxx_destruct;
- (long long)actions;
- (id)address;
- (id)description;
- (id)deviceCredential;
- (id)init;
- (id)initWithActions:(long long)arg1 deviceCredential:(id)arg2 address:(id)arg3;

@end
