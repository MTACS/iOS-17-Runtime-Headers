
@interface _UIDataSourceSnapshot : NSObject <_UIDataSourceSnapshot> {
    _UIDataSourceSnapshotter * _snapshotter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)globalIndexForIndexPath:(id)arg1;
- (id)indexPathForGlobalIndex:(long long)arg1;
- (id)initWithDataSourceSnapshotter:(id)arg1;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForSection:(long long)arg1;
- (long long)sectionForGlobalIndex:(long long)arg1;

@end
