
@interface _IDSRealTimeEncryptionProxy : NSObject <IDSDaemonListenerProtocol> {
    NSString * _accountID;
    CUTWeakReference * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _uniqueID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (void)requestMasterKeyMaterialForGroup:(id)arg1;
- (void)requestPublicKeys;
- (void)resetKeysForGroup:(id)arg1;
- (void)sendMKMRecoveryRequestToGroup:(id)arg1;
- (void)sendMasterKeyMaterialToGroup:(id)arg1;
- (void)sendPrekeyToGroup:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end
