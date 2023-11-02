
@interface CIDVUIIdentityProofingDataSharingFlowManager : NSObject {
    _TtC9CoreIDVUI52CIDVUIInternalIdentityProofingDataSharingFlowManager * _dataSharingManager;
}

@property (nonatomic, retain) _TtC9CoreIDVUI52CIDVUIInternalIdentityProofingDataSharingFlowManager *dataSharingManager;

- (void).cxx_destruct;
- (void)checkUserConsent:(id /* block */)arg1;
- (id)dataSharingManager;
- (void)didChangeUserConsent:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)fetchUserConsent:(id /* block */)arg1;
- (id)init;
- (void)setDataSharingManager:(id)arg1;

@end
