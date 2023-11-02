
@interface HDCloudSyncDiscoverUserIdentityOperation : HDCloudSyncOperation {
    CKUserIdentityLookupInfo * _identityLookupInfo;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CKUserIdentity * _userIdentity;
}

@property (nonatomic, readonly, copy) CKUserIdentity *userIdentity;

- (void).cxx_destruct;
- (void)_unitTest_setUserIdentity:(id)arg1;
- (id)initWithConfiguration:(id)arg1 identityLookupInfo:(id)arg2;
- (void)main;
- (id)userIdentity;

@end
