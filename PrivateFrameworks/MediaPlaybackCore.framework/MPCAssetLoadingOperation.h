
@interface MPCAssetLoadingOperation : NSOperation {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completion;
    MPCPlayerItemConfigurator * _configurator;
    <MPCAssetLoaderDelegate> * _delegate;
    NSError * _error;
    bool  _isExecuting;
    bool  _isFinished;
    MPAVItem * _item;
    long long  _token;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, retain) MPCPlayerItemConfigurator *configurator;
@property (nonatomic) <MPCAssetLoaderDelegate> *delegate;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly, copy) MPAVItem *item;
@property (nonatomic, readonly) long long token;

- (void).cxx_destruct;
- (bool)_configureItem:(id)arg1 error:(id*)arg2;
- (id)callbackQueue;
- (id /* block */)completion;
- (id)configurator;
- (id)delegate;
- (id)error;
- (id)initWithPlayerItem:(id)arg1 configurator:(id)arg2 delegate:(id)arg3 token:(long long)arg4 callbackQueue:(id)arg5 completion:(id /* block */)arg6;
- (bool)isExecuting;
- (bool)isFinished;
- (id)item;
- (void)main;
- (void)setConfigurator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)start;
- (long long)token;

@end
