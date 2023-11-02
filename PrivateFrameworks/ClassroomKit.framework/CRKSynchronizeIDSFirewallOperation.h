
@interface CRKSynchronizeIDSFirewallOperation : CATOperation {
    <CRKIDSPrimitives> * _IDSPrimitives;
    CATOperation * _addAllowedAppleIDsOperation;
    NSSet * _appleIDsToAdd;
    NSSet * _appleIDsToRemove;
    CATOperation * _fetchAllowedAppleIDsOperation;
    <CRKIDSLocalFirewallStorage> * _localStorage;
    CATOperation * _removeAllowedAppleIDsOperation;
    NSSet * _trustedRosterAppleIDs;
}

@property (nonatomic, readonly) <CRKIDSPrimitives> *IDSPrimitives;
@property (nonatomic, retain) CATOperation *addAllowedAppleIDsOperation;
@property (nonatomic, copy) NSSet *appleIDsToAdd;
@property (nonatomic, copy) NSSet *appleIDsToRemove;
@property (nonatomic, retain) CATOperation *fetchAllowedAppleIDsOperation;
@property (nonatomic, readonly) <CRKIDSLocalFirewallStorage> *localStorage;
@property (nonatomic, retain) CATOperation *removeAllowedAppleIDsOperation;
@property (nonatomic, readonly, copy) NSSet *trustedRosterAppleIDs;

- (void).cxx_destruct;
- (id)IDSPrimitives;
- (void)addAllowedAppleIDs;
- (id)addAllowedAppleIDsOperation;
- (id)appleIDsToAdd;
- (id)appleIDsToRemove;
- (void)cancel;
- (void)computeChanges;
- (void)fetchAllowedAppleIDs;
- (id)fetchAllowedAppleIDsOperation;
- (void)finishWithError:(id)arg1;
- (id)initWithIDSPrimitives:(id)arg1 localStorage:(id)arg2 trustedRosterAppleIDs:(id)arg3;
- (bool)isAsynchronous;
- (id)localStorage;
- (void)main;
- (id)operationToAddAllowedAppleIDs:(id)arg1;
- (void)operationToAddAllowedAppleIDsDidFinish:(id)arg1;
- (id)operationToFetchAllowedAppleIDs;
- (void)operationToFetchAppleIDsDidFinish:(id)arg1;
- (id)operationToRemoveAllowedAppleIDs:(id)arg1;
- (void)operationToRemoveAllowedAppleIDsDidFinish:(id)arg1;
- (void)removeAllowedAppleIDs;
- (id)removeAllowedAppleIDsOperation;
- (void)run;
- (void)setAddAllowedAppleIDsOperation:(id)arg1;
- (void)setAppleIDsToAdd:(id)arg1;
- (void)setAppleIDsToRemove:(id)arg1;
- (void)setFetchAllowedAppleIDsOperation:(id)arg1;
- (void)setRemoveAllowedAppleIDsOperation:(id)arg1;
- (id)trustedRosterAppleIDs;

@end
