
@interface CSPrivateSearchConnection : CSSearchConnection {
    NSString * _token;
}

@property (nonatomic, retain) NSString *token;

+ (id)privateSearchConnectionWithToken:(id)arg1;

- (void).cxx_destruct;
- (id)createXPCDictionaryForQuery:(id)arg1 queryID:(long long)arg2 queryContext:(id)arg3 needsInitialization:(bool)arg4;
- (id)initWithToken:(id)arg1;
- (void)sendMessageAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)setToken:(id)arg1;
- (id)token;

@end
