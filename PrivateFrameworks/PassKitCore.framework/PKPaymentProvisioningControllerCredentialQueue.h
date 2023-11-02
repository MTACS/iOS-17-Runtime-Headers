
@interface PKPaymentProvisioningControllerCredentialQueue : NSObject {
    NSMutableArray * _completedCredentials;
    NSMutableArray * _credentials;
    unsigned long long  _currentIndex;
}

- (void).cxx_destruct;
- (unsigned long long)completedCount;
- (id)completedCredentials;
- (unsigned long long)count;
- (id)credentials;
- (id)init;
- (id)nextCredentialToProvision;
- (unsigned long long)remaining;
- (void)removeCredential:(id)arg1;
- (void)setCredentialsToProvision:(id)arg1;
- (void)setCurrentCredential:(id)arg1;

@end
