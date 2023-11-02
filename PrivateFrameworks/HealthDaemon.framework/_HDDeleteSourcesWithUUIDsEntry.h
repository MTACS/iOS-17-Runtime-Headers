
@interface _HDDeleteSourcesWithUUIDsEntry : HDJournalEntry {
    NSSet * _UUIDs;
    NSString * _bundleIdentifier;
}

@property (nonatomic, retain) NSSet *UUIDs;
@property (nonatomic, copy) NSString *bundleIdentifier;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUIDs;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDs:(id)arg1 bundleIdentifier:(id)arg2;
- (void)setBundleIdentifier:(id)arg1;
- (void)setUUIDs:(id)arg1;

@end
