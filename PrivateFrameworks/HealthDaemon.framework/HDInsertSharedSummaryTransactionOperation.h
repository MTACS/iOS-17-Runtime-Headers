
@interface HDInsertSharedSummaryTransactionOperation : HDJournalableOperation {
    HDCloudSyncZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, readonly, copy) HDCloudSyncZoneIdentifier *zoneIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneIdentifier:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)transactionContext;
- (id)zoneIdentifier;

@end
