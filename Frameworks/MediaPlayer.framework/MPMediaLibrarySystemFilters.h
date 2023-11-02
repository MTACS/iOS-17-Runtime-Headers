
@interface MPMediaLibrarySystemFilters : NSObject {
    MPMediaLibraryView * _libraryView;
    bool  _shouldExcludePurchaseHistoryContent;
}

+ (id)filtersForLibrary:(id)arg1;
+ (id)globalSerialQueue;
+ (id)systemFiltersPerLibrary;

- (void).cxx_destruct;
- (void)_cloudLibraryAvailabilityDidChange:(id)arg1;
- (id)_initWithLibrary:(id)arg1;
- (void)_updateFilters;
- (bool)shouldExcludePurchaseHistoryContent;

@end
