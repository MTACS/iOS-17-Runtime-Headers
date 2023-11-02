
@interface PXCNRecipientSearchDataSource : PXRecipientSearchDataSource {
    NSArray * _searchResults;
}

- (void).cxx_destruct;
- (id)initWithSearchResults:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
