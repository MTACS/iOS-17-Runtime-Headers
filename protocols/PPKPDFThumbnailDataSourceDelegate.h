
@protocol PPKPDFThumbnailDataSourceDelegate <NSObject>

@required

- (void)handlePageOrderedCollectionDifference:(NSOrderedCollectionDifference *)arg1;
- (void)insertFileAtURL:(void *)arg1 atIndex:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*

@end
