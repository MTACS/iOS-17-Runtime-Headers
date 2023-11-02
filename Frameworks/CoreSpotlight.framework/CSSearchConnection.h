
@interface CSSearchConnection : CSXPCConnection {
    NSMutableDictionary * _queries;
}

@property (nonatomic, retain) NSMutableDictionary *queries;

+ (id)sharedCSUserFSConnection;
+ (id)sharedSearchConnection;

- (void).cxx_destruct;
- (void)cancelQuery:(unsigned long long)arg1;
- (id)createXPCDictionaryForQuery:(id)arg1 queryID:(long long)arg2 queryContext:(id)arg3 needsInitialization:(bool)arg4;
- (void)handleError:(id)arg1;
- (void)handleReply:(id)arg1;
- (id)init;
- (id)initWithMachServiceName:(id)arg1;
- (void)preheat:(id)arg1;
- (id)queries;
- (id)queryForID:(id)arg1;
- (id)removeQueryForID:(id)arg1;
- (void)sendMessageAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)setQueries:(id)arg1;
- (void)setQuery:(id)arg1 forID:(id)arg2;
- (void)startQuery:(id)arg1 context:(id)arg2;

@end
