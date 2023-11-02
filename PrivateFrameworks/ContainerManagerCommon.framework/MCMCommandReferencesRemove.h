
@interface MCMCommandReferencesRemove : MCMCommand <MCMParametersReferencesQuery, MCMParametersWithOwnersAndGroups> {
    unsigned long long  _containerClass;
    bool  _createDuringReconciliation;
    bool  _deleteDuringReconciliation;
    unsigned long long  _explicitFlags;
    NSSet * _groupIdentifiers;
    NSSet * _ownerIdentifiers;
    unsigned long long  _privateFlags;
    unsigned int  _uid;
    MCMUserIdentity * _userIdentity;
    bool  _yesReallyApplyToAll;
}

@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) bool createDuringReconciliation;
@property (nonatomic, readonly) bool deleteDuringReconciliation;
@property (nonatomic, readonly) unsigned long long explicitFlags;
@property (nonatomic, readonly) NSSet *groupIdentifiers;
@property (nonatomic, readonly) NSSet *ownerIdentifiers;
@property (nonatomic, readonly) unsigned long long privateFlags;
@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;
@property (nonatomic, readonly) bool yesReallyApplyToAll;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (unsigned long long)containerClass;
- (bool)createDuringReconciliation;
- (bool)deleteDuringReconciliation;
- (void)execute;
- (unsigned long long)explicitFlags;
- (id)groupIdentifiers;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)ownerIdentifiers;
- (bool)preflightClientAllowed;
- (unsigned long long)privateFlags;
- (unsigned int)uid;
- (id)userIdentity;
- (bool)yesReallyApplyToAll;

@end
