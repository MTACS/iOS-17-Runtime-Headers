
@interface VSIdentityProviderFetchAppsOperation : VSAsyncOperation {
    NSString * _identityProviderID;
    NSOperationQueue * _privateQueue;
    NSString * _providerIdentifier;
    unsigned long long  _requestType;
    VSOptional * _result;
    bool  _shouldFetchImages;
    bool  _shouldPrecomposeIcon;
}

@property (nonatomic, retain) NSString *identityProviderID;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) NSString *providerIdentifier;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic) bool shouldFetchImages;
@property (nonatomic) bool shouldPrecomposeIcon;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)identityProviderID;
- (id)initWithProviderIdentifier:(id)arg1 andType:(unsigned long long)arg2;
- (id)privateQueue;
- (id)providerIdentifier;
- (unsigned long long)requestType;
- (id)result;
- (void)setIdentityProviderID:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setProviderIdentifier:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setResult:(id)arg1;
- (void)setShouldFetchImages:(bool)arg1;
- (void)setShouldPrecomposeIcon:(bool)arg1;
- (bool)shouldFetchImages;
- (bool)shouldPrecomposeIcon;

@end
