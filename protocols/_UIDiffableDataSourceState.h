
@protocol _UIDiffableDataSourceState <_UIDiffableDataSourceQuerying, NSObject>

@required

- (<_UIDataSourceSnapshotTranslating> *)dataSourceSnapshot;
- (void)ensureOrderedSetsHaveGuaranteedPerformance;
- (NSUUID *)generationID;
- (NSOrderedSet *)guaranteedPerformanceIdentifiers;
- (NSOrderedSet *)guaranteedPerformanceSections;
- (NSOrderedSet *)identifiers;
- (NSIndexSet *)sectionIndexesForItemIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (NSOrderedSet *)sections;
- (void)validateIdentifiers;
- (void)willBecomeWiredToDataSource;

@end
