
@interface DDSTRIClient : NSObject <DDSTRIClient> {
    TRIClient * _client;
}

@property (readonly) TRIClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addUpdateHandlerForNamespaceName:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)client;
- (id)experimentIdentifiersWithNamespaceName:(id)arg1;
- (id)initWithClient:(id)arg1;
- (id)levelForFactor:(id)arg1 withNamespaceName:(id)arg2;
- (void)refresh;
- (void)removeUpdateHandlerForToken:(id)arg1;

@end
