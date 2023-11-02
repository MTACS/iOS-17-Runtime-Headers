
@interface ASKLoadResourceOperation : NSOperation {
    long long  __loadReason;
    id /* block */  _outputBlock;
}

@property (setter=_setLoadReason:, nonatomic) long long _loadReason;
@property (copy) id /* block */ outputBlock;

+ (id)supportedScheme;

- (void).cxx_destruct;
- (long long)_loadReason;
- (void)_setLoadReason:(long long)arg1;
- (void)didCompleteWithResource:(id)arg1 error:(id)arg2;
- (id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2;
- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;

@end
