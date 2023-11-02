
@interface ASAuthorizationOpenIDRequest : ASAuthorizationRequest {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    NSString * _nonce;
    NSString * _requestedOperation;
    NSArray * _requestedScopes;
    NSString * _state;
}

@property (nonatomic, copy) NSString *nonce;
@property (nonatomic, copy) NSString *requestedOperation;
@property (nonatomic, copy) NSArray *requestedScopes;
@property (nonatomic, copy) NSString *state;

- (void).cxx_destruct;
- (id)init;
- (id)nonce;
- (id)requestedOperation;
- (id)requestedScopes;
- (void)setNonce:(id)arg1;
- (void)setRequestedOperation:(id)arg1;
- (void)setRequestedScopes:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (bool)supportsStyle:(long long)arg1;

@end
