
@interface CPLPushSessionUpdate : CPLChangeSessionUpdate {
    NSArray * _addedRecords;
    NSArray * _deletedRecordScopedIdentifiers;
    CPLChangeBatch * _diffBatch;
    NSDictionary * _pushContexts;
    NSDictionary * _recordWithStatusChangesToNotify;
    NSArray * _revertedChanges;
    NSSet * _unquarantinedRecordScopedIdentifiers;
    NSArray * _updatedRecords;
}

@property (nonatomic, readonly) NSArray *addedRecords;
@property (nonatomic, readonly) NSArray *deletedRecordScopedIdentifiers;
@property (nonatomic, readonly) CPLChangeBatch *diffBatch;
@property (nonatomic, readonly) NSDictionary *pushContexts;
@property (nonatomic, readonly) NSDictionary *recordWithStatusChangesToNotify;
@property (nonatomic, readonly) NSArray *revertedChanges;
@property (nonatomic, readonly) NSSet *unquarantinedRecordScopedIdentifiers;
@property (nonatomic, readonly) NSArray *updatedRecords;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addedRecords;
- (bool)applyToStore:(id)arg1 error:(id*)arg2;
- (id)deletedRecordScopedIdentifiers;
- (id)diffBatch;
- (bool)discardFromStore:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPushSessionTracker:(id)arg1 error:(id*)arg2;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1;
- (id)pushContexts;
- (id)recordWithStatusChangesToNotify;
- (id)revertedChanges;
- (id)statusDescription;
- (id)storageForStatusInStore:(id)arg1;
- (id)unquarantinedRecordScopedIdentifiers;
- (id)updatedRecords;

@end
