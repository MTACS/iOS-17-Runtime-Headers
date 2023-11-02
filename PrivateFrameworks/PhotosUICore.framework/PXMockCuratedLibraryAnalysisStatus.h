
@interface PXMockCuratedLibraryAnalysisStatus : PXCuratedLibraryAnalysisStatus

+ (id)_mockStatus;
+ (bool)shouldUseMock;

- (void)_updateStatusProperties;
- (void)alternateTitleIndexDidChange;
- (void)dealloc;
- (id)initWithDataSourceManager:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
