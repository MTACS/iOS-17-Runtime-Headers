
@interface VSFeaturedIdentityProviderLimitingOperation : VSAsyncOperation {
    NSOperationQueue * _privateQueue;
    VSOptional * _result;
    NSArray * _unlimitedIdentityProviders;
}

@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, copy) NSArray *unlimitedIdentityProviders;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;
- (id)privateQueue;
- (id)result;
- (void)setPrivateQueue:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setUnlimitedIdentityProviders:(id)arg1;
- (id)unlimitedIdentityProviders;

@end
