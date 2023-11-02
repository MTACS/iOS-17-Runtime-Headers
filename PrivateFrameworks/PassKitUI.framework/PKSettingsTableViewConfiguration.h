
@interface PKSettingsTableViewConfiguration : NSObject {
    NSDiffableDataSourceSnapshot * _currentSnapshot;
    NSMutableDictionary * _rowsForIdentifier;
    NSMutableDictionary * _sectionsForIdentifier;
}

@property (nonatomic, readonly) NSArray *sections;

- (void).cxx_destruct;
- (void)appendSection:(id)arg1 rows:(id)arg2;
- (void)diff:(id)arg1 updatedIdentifiers:(id*)arg2;
- (id)init;
- (id)rowForItemIdentifier:(id)arg1;
- (id)rowsForSection:(id)arg1;
- (id)sectionForSectionIdentifier:(id)arg1;
- (id)sections;
- (id)snapshot;

@end
