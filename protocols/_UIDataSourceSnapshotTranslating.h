
@protocol _UIDataSourceSnapshotTranslating <_UIDataSourceSnapshot>

@required

- (long long)globalIndexForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)indexPathForGlobalIndex:(long long)arg1;
- (long long)numberOfItems;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForSection:(long long)arg1;
- (long long)sectionForGlobalIndex:(long long)arg1;

@end
