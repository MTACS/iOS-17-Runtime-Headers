
@interface _PXFeedSyntheticDataSource : PXSectionedDataSource {
    long long  _numberOfItemsPerSection;
    long long  _numberOfSections;
}

- (id)initWithNumberOfSections:(long long)arg1 numberOfItemsPerSection:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
