
@interface CipherML.CipherMLService : SwiftNativeNSObject <CipherML.CipherMLServiceProtocol> {
    void _transaction;
    void activeTask;
    void networkManager;
}

- (void)cancelUpload;
- (id)init;
- (void)uploadKeysWithEncodedUserIdentifier:(id)arg1 keyConfigData:(id)arg2 delegate:(id)arg3;

@end
