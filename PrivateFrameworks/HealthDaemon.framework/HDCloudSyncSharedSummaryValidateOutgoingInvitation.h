
@interface HDCloudSyncSharedSummaryValidateOutgoingInvitation : HDCloudSyncOperation {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CKUserIdentity * _userIdentity;
}

+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (void)main;

@end
