
@interface PXMemoriesFeedDataSource : PXSectionedDataSource <PXSectionedLayoutEngineDataSourceSnapshot> {
    NSArray * _entries;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _indexPathForFirstPastMemorySection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly, copy) NSArray *entries;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } indexPathForFirstPastMemorySection;
@property (nonatomic, readonly) long long numberOfSections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateItemIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateSectionIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 reverseDirection:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateSectionIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 usingBlock:(id /* block */)arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_firstSectionIndexPath;
- (id)diagnosticDescription;
- (id)entries;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForFirstPastMemorySection;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1 withHintIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)init;
- (id)initWithEntries:(id)arg1;
- (id)inputForItem:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)sectionedObjectReferenceForMemoryUUID:(id)arg1;
- (void)setIndexPathForFirstPastMemorySection:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
