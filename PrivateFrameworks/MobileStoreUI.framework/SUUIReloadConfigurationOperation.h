
@interface SUUIReloadConfigurationOperation : NSOperation {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _outputBlock;
    SSURLBag * _urlBag;
}

@property (retain) SSURLBag *URLBag;
@property (copy) id /* block */ outputBlock;

+ (id)cachePath;

- (void).cxx_destruct;
- (id)URLBag;
- (id)init;
- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;
- (void)setURLBag:(id)arg1;

@end
