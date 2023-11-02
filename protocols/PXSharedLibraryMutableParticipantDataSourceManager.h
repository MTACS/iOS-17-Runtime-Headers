
@protocol PXSharedLibraryMutableParticipantDataSourceManager <PXMutableSectionedDataSourceManager>

@required

- (void)addParticipants:(NSArray *)arg1;
- (void)removeParticipantAtIndex:(unsigned long long)arg1;
- (void)replaceDataSourceWithDataSource:(PXSharedLibraryParticipantDataSource *)arg1;

@end
