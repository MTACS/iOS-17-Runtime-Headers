
@interface DCPresentmentSession : NSObject {
    DCPresentmentClient * _client;
    bool  _hasBeenConfigured;
    DCPresentmentSessionOptions * _options;
    NSArray * _partitions;
    unsigned long long  _presentmentType;
}

@property (nonatomic, retain) DCPresentmentClient *client;
@property (nonatomic) bool hasBeenConfigured;
@property (nonatomic, retain) DCPresentmentSessionOptions *options;
@property (nonatomic, retain) NSArray *partitions;
@property (nonatomic) unsigned long long presentmentType;

- (void).cxx_destruct;
- (void)buildCredentialResponseForSelection:(id)arg1 completion:(id /* block */)arg2;
- (void)buildErrorResponseWithStatus:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)buildResponseForSelection:(id)arg1 completion:(id /* block */)arg2;
- (id)client;
- (void)configureIfNeededWithContinuation:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)generateTransportKeyForSpecification:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (bool)hasBeenConfigured;
- (id)initWithPartitions:(id)arg1 presentmentType:(unsigned long long)arg2;
- (id)initWithPartitions:(id)arg1 presentmentType:(unsigned long long)arg2 options:(id)arg3;
- (void)interpretRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)options;
- (id)partitions;
- (unsigned long long)presentmentType;
- (void)setClient:(id)arg1;
- (void)setHasBeenConfigured:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setPartitions:(id)arg1;
- (void)setPresentmentType:(unsigned long long)arg1;

@end
