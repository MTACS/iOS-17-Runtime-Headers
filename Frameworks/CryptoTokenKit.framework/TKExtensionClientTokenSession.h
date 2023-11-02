
@interface TKExtensionClientTokenSession : TKClientTokenSession {
    NSArray * _advertisedItems;
    long long  _connectionIdentifier;
    NSNumber * _sessionID;
}

@property (nonatomic, readonly) NSNumber *sessionID;

- (void).cxx_destruct;
- (id)advertisedItems;
- (id)certificates;
- (id)createObjectWithAttributes:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)ensureSessionWithClient:(id)arg1 connectionIdentifier:(long long)arg2 error:(id*)arg3;
- (bool)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 error:(id*)arg3;
- (id)identities;
- (id)initWithToken:(id)arg1 LAContext:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (bool)isValidWithError:(id*)arg1;
- (id)itemsOfClass:(id)arg1;
- (id)keys;
- (id)objectForObjectID:(id)arg1 error:(id*)arg2;
- (id)sessionID;
- (void)terminate;
- (id)withError:(id*)arg1 accessControl:(struct __SecAccessControl { }*)arg2 invoke:(id /* block */)arg3;

@end
