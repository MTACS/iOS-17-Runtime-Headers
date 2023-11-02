
@interface _UIDataSourceSnapshotter : NSObject <NSCopying, _UIDataSourceSnapshotTranslating> {
    struct vector<_NSRange, std::allocator<_NSRange>> { 
        struct _NSRange {} *__begin_; 
        struct _NSRange {} *__end_; 
        struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { 
            struct _NSRange {} *__value_; 
        } __end_cap_; 
    }  _sectionRanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)snapshotterForDataSourceBackedView:(id)arg1;
+ (id)snapshotterForNoDataSource;
+ (id)snapshotterForSectionCountsProvider:(id /* block */)arg1;
+ (id)snapshotterForSnapshot:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_decrementSectionCount:(long long)arg1;
- (bool)_decrementSectionCount:(long long)arg1 byCount:(long long)arg2;
- (bool)_deleteAllSections;
- (bool)_deleteSection:(long long)arg1;
- (bool)_incrementSectionCount:(long long)arg1;
- (bool)_incrementSectionCount:(long long)arg1 byCount:(long long)arg2;
- (bool)_insertSection:(long long)arg1 withInitialCount:(long long)arg2;
- (void)_recomputeRangeLocations;
- (void)_resetToStateOfSnapshotter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)globalIndexForIndexPath:(id)arg1;
- (id)indexPathForAppendingInsertInSection:(long long)arg1;
- (id)indexPathForGlobalIndex:(long long)arg1;
- (bool)indexPathIsSectionAppendingInsert:(id)arg1;
- (id)initWithDataSourceBackedView:(id)arg1;
- (id)initWithSectionCounts:(id)arg1;
- (id)initWithSectionCountsProvider:(id /* block */)arg1;
- (bool)isEqual:(id)arg1;
- (long long)numberOfItems;
- (long long)numberOfItemsBeforeSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForSection:(long long)arg1;
- (long long)sectionForGlobalIndex:(long long)arg1;
- (id)snapshot;

@end
