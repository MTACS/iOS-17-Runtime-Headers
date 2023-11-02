
@interface PXStackedDataSource : PXSectionedDataSource {
    NSArray * _dataSections;
}

@property (nonatomic, readonly) NSArray *dataSections;

- (void).cxx_destruct;
- (id)changeDetailsToDataSource:(id)arg1 sectionChanges:(id)arg2 itemChanges:(id)arg3;
- (id)dataSections;
- (id)init;
- (id)initWithDataSections:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
