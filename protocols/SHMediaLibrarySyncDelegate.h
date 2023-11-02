
@protocol SHMediaLibrarySyncDelegate <NSObject>

@optional

- (void)_library:(id <SHMediaLibrarySync>)arg1 didChangeWithSnapshot:(SHMediaLibrarySnapshot *)arg2;
- (void)_library:(id <SHMediaLibrarySync>)arg1 didProduceError:(NSError *)arg2 failedItemIdentifiers:(NSArray *)arg3;
- (void)_libraryDidCompleteSync:(id <SHMediaLibrarySync>)arg1;
- (void)_libraryWillBeginSync:(id <SHMediaLibrarySync>)arg1;

@end
