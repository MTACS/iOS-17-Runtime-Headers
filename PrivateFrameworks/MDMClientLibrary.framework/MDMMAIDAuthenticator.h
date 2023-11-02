
@interface MDMMAIDAuthenticator : NSObject <DMCHTTPAuthenticator> {
    NSString * _rmAccountID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *rmAccountID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appleIDContext;
- (bool)authenticateRequest:(id)arg1 error:(id*)arg2;
- (id)initWithRMAccountID:(id)arg1;
- (bool)prepareTask:(id)arg1 error:(id*)arg2;
- (id)rmAccountID;
- (void)setRmAccountID:(id)arg1;

@end
