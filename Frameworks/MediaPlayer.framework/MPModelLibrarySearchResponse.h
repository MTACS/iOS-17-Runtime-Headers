
@interface MPModelLibrarySearchResponse : MPModelLibraryResponse

- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (bool)hasMoreResultsForSectionAtIndex:(long long)arg1;
- (id)initWithRequest:(id)arg1;
- (long long)searchWeightForIndexPath:(id)arg1;

@end
