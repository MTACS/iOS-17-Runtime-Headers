
@interface HMDCoreDataCloudStoreTransactionLogEvent : HMMLogEvent {
    NSCountedSet * _reasons;
    NSString * _transactionAuthor;
}

@property (nonatomic, readonly) NSCountedSet *reasons;
@property (nonatomic, readonly) NSString *transactionAuthor;

+ (void)countMKFCKEntitiesInChangeSet:(id)arg1 entitiesCount:(id)arg2;
+ (id)eventForUpdates:(id)arg1 inserts:(id)arg2 deletes:(id)arg3 transactionAuthor:(id)arg4;
+ (void)trimChangeSetForUnchangedValues:(id)arg1;

- (void).cxx_destruct;
- (id)initWithChangeSet:(id)arg1 transactionAuthor:(id)arg2;
- (id)reasons;
- (id)transactionAuthor;

@end
