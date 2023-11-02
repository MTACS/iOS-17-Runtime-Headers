
@interface HDDeleteAllDeviceContextKeyValueEntriesOperation : HDJournalableOperation {
    HDSyncIdentity * _syncIdentity;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSyncIdentity:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)transactionContext;

@end
