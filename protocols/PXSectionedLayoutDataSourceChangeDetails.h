
@protocol PXSectionedLayoutDataSourceChangeDetails <PXLayoutDataSourceChangeDetails>

@required

- (PXArrayChangeDetails *)itemChangesInSection:(long long)arg1;
- (PXArrayChangeDetails *)sectionChanges;
- (NSIndexSet *)sectionsWithItemChanges;

@end
