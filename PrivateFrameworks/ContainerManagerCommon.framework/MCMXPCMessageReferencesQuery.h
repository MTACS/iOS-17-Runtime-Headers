
@interface MCMXPCMessageReferencesQuery : MCMXPCMessageWithOwnersAndGroupsBase <MCMParametersReferencesQuery> {
    bool  _createDuringReconciliation;
    bool  _deleteDuringReconciliation;
    unsigned long long  _explicitFlags;
    unsigned long long  _privateFlags;
    unsigned int  _uid;
    MCMUserIdentity * _userIdentity;
    bool  _yesReallyApplyToAll;
}

@property (nonatomic, readonly) bool createDuringReconciliation;
@property (nonatomic, readonly) bool deleteDuringReconciliation;
@property (nonatomic, readonly) unsigned long long explicitFlags;
@property (nonatomic, readonly) unsigned long long privateFlags;
@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;
@property (nonatomic, readonly) bool yesReallyApplyToAll;

- (void).cxx_destruct;
- (bool)createDuringReconciliation;
- (bool)deleteDuringReconciliation;
- (unsigned long long)explicitFlags;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (unsigned long long)privateFlags;
- (unsigned int)uid;
- (id)userIdentity;
- (bool)yesReallyApplyToAll;

@end
