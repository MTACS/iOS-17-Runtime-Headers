
@interface _HDDataManagerDeletionJournalEntry : HDJournalEntry {
    <HKUUIDCollection> * _UUIDCollection;
    HDDataDeletionConfiguration * _configuration;
}

@property (nonatomic, readonly) <HKUUIDCollection> *UUIDCollection;
@property (nonatomic, readonly, copy) HDDataDeletionConfiguration *configuration;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUIDCollection;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 objectUUIDs:(id)arg2;

@end
