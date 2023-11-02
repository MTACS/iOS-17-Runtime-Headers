
@interface HSGetAuthorizedAccountsTokenResponse : HSResponse {
    NSData * tokenData;
}

@property (nonatomic, copy) NSData *tokenData;

- (void).cxx_destruct;
- (void)setTokenData:(id)arg1;
- (id)tokenData;

@end
