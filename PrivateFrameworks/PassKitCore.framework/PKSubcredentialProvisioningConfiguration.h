
@interface PKSubcredentialProvisioningConfiguration : NSObject {
    long long  _configurationType;
}

@property (nonatomic, readonly) long long configurationType;

- (id)acceptInvitationConfiguration;
- (long long)configurationType;
- (id)initWithConfigurationType:(long long)arg1;
- (id)localDeviceConfiguration;
- (id)ownerConfiguration;
- (id)remoteDeviceConfiguration;
- (id)remoteDeviceInvitation;
- (long long)startingState;
- (id)transitionTable;

@end
