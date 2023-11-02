
@interface _NSDiffableDataSourceSectionSnapshotState : NSObject <NSCopying> {
    NSOrderedSet * _guaranteedPerformanceIdentifiers;
    unsigned long long  _identifierLookupCount;
    NSOrderedSet * _identifiers;
    _UITreeDataSourceSnapshotter * _snapshotter;
}

@property (nonatomic, readonly) NSOrderedSet *identifiers;
@property (nonatomic, readonly) <_UITreeDataSourceSnapshotter> *snapshotter;

- (void).cxx_destruct;
- (bool)containsIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifiers;
- (long long)indexOfIdentifier:(id)arg1;
- (id)init;
- (id)initWithSnapshotter:(id)arg1 identifiers:(id)arg2;
- (id)initWithSnapshotter:(id)arg1 identifiers:(id)arg2 identifiersHaveGuaranteedPerformance:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)snapshotter;
- (id)snapshotterMutableCopy;
- (void)willBecomeWiredToDataSource;

@end
