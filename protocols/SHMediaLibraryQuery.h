
@protocol SHMediaLibraryQuery <NSObject>

@required

- (void)_libraryInfoWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SHMediaLibraryInfo *, NSError *, void*
- (void)_queryLibraryWithParameters:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: SHMediaLibraryQueryParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*

@end
