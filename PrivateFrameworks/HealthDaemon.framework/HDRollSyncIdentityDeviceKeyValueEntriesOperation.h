
@interface HDRollSyncIdentityDeviceKeyValueEntriesOperation : HDJournalableOperation {
    HDSyncIdentity * _newSyncIdentity;
    HDSyncIdentity * _oldSyncIdentity;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOldSyncIdentity:(id)arg1 newSyncIdentity:(id)arg2;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
