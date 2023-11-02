
@interface MCMManagedUserPathRegistry : MCMManagedPathRegistry {
    MCMManagedPath * _containermanagerUserDeleteOperations;
    MCMManagedPath * _containermanagerUserLibrary;
    MCMManagedPath * _containermanagerUserPendingUpdates;
    MCMManagedPath * _containermanagerUserReplaceOperations;
    MCMManagedPath * _userHome;
    MCMUserIdentity * _userIdentity;
    MCMManagedPath * _userLibrary;
}

@property (nonatomic, readonly) MCMManagedPath *containermanagerUserDeleteOperations;
@property (nonatomic, readonly) MCMManagedPath *containermanagerUserLibrary;
@property (nonatomic, readonly) MCMManagedPath *containermanagerUserPendingUpdates;
@property (nonatomic, readonly) MCMManagedPath *containermanagerUserReplaceOperations;
@property (nonatomic, readonly) MCMManagedPath *userHome;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;
@property (nonatomic, readonly) MCMManagedPath *userLibrary;

- (void).cxx_destruct;
- (void)_initPathPropertiesWithUserIdentity:(id)arg1;
- (id)containermanagerUserDeleteOperations;
- (id)containermanagerUserLibrary;
- (id)containermanagerUserPendingUpdates;
- (id)containermanagerUserReplaceOperations;
- (id)initWithUserIdentity:(id)arg1 daemonUser:(id)arg2;
- (id)userHome;
- (id)userIdentity;
- (id)userLibrary;

@end
