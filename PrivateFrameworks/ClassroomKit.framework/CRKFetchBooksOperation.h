
@interface CRKFetchBooksOperation : CATOperation {
    id /* block */  mBookLibraryProxy;
    NSMutableArray * mBooks;
    bool  mIncludeImages;
}

- (void).cxx_destruct;
- (id)initWithBookLibraryProxy:(id /* block */)arg1;
- (id)initWithBookLibraryProxy:(id /* block */)arg1 includeImages:(bool)arg2;
- (id)initWithBookLibraryProxy:(id /* block */)arg1 request:(id)arg2 error:(id*)arg3;
- (bool)isAsynchronous;
- (void)main;
- (void)parseBookMetadataOperationDidFail:(id)arg1;
- (void)parsePDFMetadataOperationDidFail:(id)arg1;

@end
