
@interface MPStoreLyricsSnippetRequestOperation : MPAsyncOperation {
    id /* block */  _responseHandler;
    MPStoreLyricsSnippetURLComponents * _snippetURL;
}

@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, retain) MPStoreLyricsSnippetURLComponents *snippetURL;

- (void).cxx_destruct;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id /* block */)responseHandler;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setSnippetURL:(id)arg1;
- (id)snippetURL;

@end
