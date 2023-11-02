
@interface HFCustomDiffableDataSourceSnapshot : NSObject {
    NSArray * _sections;
}

@property (nonatomic, retain) NSArray *sections;

- (void).cxx_destruct;
- (id)itemIdentifiers;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (long long)numberOfItems;
- (long long)numberOfSections;
- (id)sectionIdentifiers;
- (id)sections;
- (void)setSections:(id)arg1;

@end
