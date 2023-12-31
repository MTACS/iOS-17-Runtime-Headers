
@interface SBKTransactionURLOperation : ISStoreURLOperation {
    SBKRequest * _SBKRequest;
    bool  _shouldAuthenticate;
}

@property (nonatomic, retain) SBKRequest *SBKRequest;
@property (nonatomic) bool shouldAuthenticate;

+ (id)operationWithRequest:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (id)SBKRequest;
- (id)_init;
- (id)description;
- (id)init;
- (void)setSBKRequest:(id)arg1;
- (void)setShouldAuthenticate:(bool)arg1;
- (bool)shouldAuthenticate;

@end
