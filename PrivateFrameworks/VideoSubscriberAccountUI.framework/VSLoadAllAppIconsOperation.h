
@interface VSLoadAllAppIconsOperation : VSAsyncOperation {
    NSArray * _appDescriptions;
    NSError * _error;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    NSOperationQueue * _privateQueue;
    id /* block */  _resultCompletionBlock;
    bool  _shouldPrecomposeIcon;
}

@property (nonatomic, retain) NSArray *appDescriptions;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, copy) id /* block */ resultCompletionBlock;
@property (nonatomic) bool shouldPrecomposeIcon;

- (void).cxx_destruct;
- (id)appDescriptions;
- (void)cancel;
- (id)error;
- (void)executionDidBegin;
- (id)init;
- (id)initWithApps:(id)arg1 shouldPrecomposeIcon:(bool)arg2;
- (id)initWithApps:(id)arg1 shouldPrecomposeIcon:(bool)arg2 preferredSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })preferredSize;
- (id)privateQueue;
- (id /* block */)resultCompletionBlock;
- (void)setAppDescriptions:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setResultCompletionBlock:(id /* block */)arg1;
- (void)setShouldPrecomposeIcon:(bool)arg1;
- (bool)shouldPrecomposeIcon;

@end
