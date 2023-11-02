
@interface PKSubcredentialProvisioningDownloadAndTrackCredentialOperation : PKSubcredentialProvisioningPairingSessionOperation {
    PKSubcredentialProvisioningDownloadPassOperation * _downloadOperation;
    NSError * _downloadOperationError;
    PKSubcredentialProvisioningTrackCredentialOperation * _trackOperation;
    NSError * _trackOperationError;
}

- (void).cxx_destruct;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)performOperation;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;

@end
