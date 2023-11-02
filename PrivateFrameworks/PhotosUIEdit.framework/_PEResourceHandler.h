
@interface _PEResourceHandler : PEResourceLoader {
    id /* block */  _progressHandler;
    id /* block */  _resultHandler;
}

@property (copy) id /* block */ progressHandler;
@property (copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (id /* block */)progressHandler;
- (id /* block */)resultHandler;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setResultHandler:(id /* block */)arg1;

@end
