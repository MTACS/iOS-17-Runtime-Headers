
@protocol CRKBooksServiceInterface <NSObject>

@required

- (void)fetchBooksWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CRKFetchBooksRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CRKFetchBooksResultObject *, NSError *, void*
- (void)fetchChaptersWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CRKFetchChaptersRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CRKFetchChaptersResultObject *, NSError *, void*

@end
