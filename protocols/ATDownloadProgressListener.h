
@protocol ATDownloadProgressListener <NSObject>

@required

- (void)getAllDownloadsWithReplyBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSOrderedSet *, NSError *, void*
- (void)prioritizeDownloadWithStoreForLibraryIdentifier:(void *)arg1 withReplyBlock:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
