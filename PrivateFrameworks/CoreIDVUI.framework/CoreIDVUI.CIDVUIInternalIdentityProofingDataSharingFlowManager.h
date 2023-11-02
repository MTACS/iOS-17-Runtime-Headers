
@interface CoreIDVUI.CIDVUIInternalIdentityProofingDataSharingFlowManager : NSObject {
    void dataSharingFlowManager;
}

- (void).cxx_destruct;
- (void)checkUserConsent:(id /* block */)arg1;
- (void)didChangeUserConsent:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)fetchUserConsent:(id /* block */)arg1;
- (id)init;

@end
