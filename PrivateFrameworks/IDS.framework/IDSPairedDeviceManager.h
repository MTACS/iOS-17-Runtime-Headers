
@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol> {
    NSSet * _allowedTrafficClassifiers;
    _IDSCompletionHandler * _deleteCompletion;
    _IDSCompletionHandler * _deliveryStatsCompletion;
    _IDSCompletionHandler * _localCompletion;
    _IDSCompletionHandler * _pairedCompletion;
    IDSXPCDaemonController * _xpcDaemonController;
}

@property (nonatomic, retain) NSSet *allowedTrafficClassifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) IDSXPCDaemonController *xpcDaemonController;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allowedTrafficClassifiers;
- (void)constructRAResponseDictionary:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)deletePairedDevice:(id)arg1 withCompletionBlock:(id /* block */)arg2 queue:(id)arg3;
- (void)deliveryStats:(id)arg1;
- (void)device:(id)arg1 pairingDeleted:(bool)arg2;
- (void)dropAllMessagesWithoutAnyAllowedClassifier;
- (void)getDeliveryStatsWithCompletionBlock:(id /* block */)arg1 queue:(id)arg2;
- (void)getLocalDeviceInfoWithCompletionBlock:(id /* block */)arg1 queue:(id)arg2;
- (void)getPairedDeviceInfoWithCompletionBlock:(id /* block */)arg1 queue:(id)arg2;
- (id)init;
- (void)setAllowedTrafficClassifiers:(id)arg1;
- (void)setPairedDeviceInfo:(id)arg1;
- (void)setXpcDaemonController:(id)arg1;
- (id)xpcDaemonController;

@end
