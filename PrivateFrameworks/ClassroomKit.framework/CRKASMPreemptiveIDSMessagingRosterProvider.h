
@interface CRKASMPreemptiveIDSMessagingRosterProvider : CRKASMRosterProviderDecoratorBase {
    <CRKIDSAddressTranslator> * _IDSAddressTranslator;
    <CRKIDSPrimitives> * _IDSPrimitives;
    <CRKKeyedDataStoreProtocol> * _dataStore;
    NSSet * _messagedAppleIDs;
    NSURL * _messagedAppleIDsURL;
    bool  _observingRoster;
}

@property (nonatomic, readonly) <CRKIDSAddressTranslator> *IDSAddressTranslator;
@property (nonatomic, readonly) <CRKIDSPrimitives> *IDSPrimitives;
@property (nonatomic, readonly) <CRKKeyedDataStoreProtocol> *dataStore;
@property (nonatomic, retain) NSSet *messagedAppleIDs;
@property (nonatomic, readonly) NSURL *messagedAppleIDsURL;
@property (getter=isObservingRoster, nonatomic) bool observingRoster;

+ (id)appleIDsFromData:(id)arg1 error:(id*)arg2;
+ (id)dataForAppleIDs:(id)arg1 error:(id*)arg2;
+ (id)observedKeyPaths;
+ (id)trustedUserAppleIDsFromRoster:(id)arg1;

- (void).cxx_destruct;
- (id)IDSAddressTranslator;
- (id)IDSPrimitives;
- (void)beginObservingRoster;
- (id)dataStore;
- (void)dealloc;
- (void)endObservingRoster;
- (id)fetchMessagedAppleIDsWitherror:(id*)arg1;
- (id)initWithRosterProvider:(id)arg1 IDSPrimitives:(id)arg2 IDSAddressTranslator:(id)arg3 dataStore:(id)arg4;
- (bool)isObservingRoster;
- (void)messageAppleID:(id)arg1;
- (id)messagedAppleIDs;
- (id)messagedAppleIDsURL;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)persistAppleIDs:(id)arg1 withError:(id*)arg2;
- (void)rosterDidChange;
- (void)setMessagedAppleIDs:(id)arg1;
- (void)setObservingRoster:(bool)arg1;

@end
