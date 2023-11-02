
@interface _AKAppleIDPasskeyRequestState : NSObject {
    id /* block */  _completion;
    AKAppleIDPasskeyCredentialRequestContext * _context;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) AKAppleIDPasskeyCredentialRequestContext *context;

+ (id)stateWithContext:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)context;
- (void)setCompletion:(id /* block */)arg1;
- (void)setContext:(id)arg1;

@end
