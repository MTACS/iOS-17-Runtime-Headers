
@interface CKVDonateConnectionFactory : NSObject <KVDonateServiceProvider> {
    CKVDonationManager * _donationManager;
    KVDonateVersionLog * _versionLog;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDonationManager:(id)arg1;
- (id)makeConnection:(id)arg1;
- (id)makeXPCConnection:(id)arg1;
- (void)terminateConnection:(id)arg1;
- (id)versionLog;

@end
