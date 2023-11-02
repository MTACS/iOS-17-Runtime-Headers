
@interface HMDRemoteEventRouterPrimaryResidentClient : HMDRemoteEventRouterClient {
    NSUUID * _primaryResidentIdentifier;
}

- (void).cxx_destruct;
- (bool)_clientIsEnabled:(id)arg1;
- (bool)clientIsEnabled:(id)arg1;
- (id)dumpStateDescription;
- (void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)arg1;
- (unsigned long long)messageTransportRestriction;

@end
