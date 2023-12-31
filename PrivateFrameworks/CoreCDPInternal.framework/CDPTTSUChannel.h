
@interface CDPTTSUChannel : NSObject <CDPSecureChannelApprovingProxy, CDPSecureChannelProxy> {
    bool  _approverBackupRecordsExist;
    unsigned long long  _approveriCloudKeychainState;
    bool  _sentInitialResponse;
    CUMessageSession * _sharingSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CUMessageSession *sharingSession;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)approverBackupRecordsExist;
- (unsigned long long)approveriCloudKeychainState;
- (id)initWithContext:(id)arg1;
- (void)listenForPayloadsWithHandler:(id /* block */)arg1;
- (void)sendPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)setApproverBackupRecordsExist:(bool)arg1;
- (void)setApproveriCloudKeychainState:(unsigned long long)arg1;
- (void)setSharingSession:(id)arg1;
- (id)sharingSession;

@end
