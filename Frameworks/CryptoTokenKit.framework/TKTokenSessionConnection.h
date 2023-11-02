
@interface TKTokenSessionConnection : NSObject <TKClientTokenProtocol> {
    NSMutableDictionary * _initialKeepAlives;
    long long  _sessionIDCounter;
    NSMutableDictionary * _sessions;
    TKTokenConnection * _tokenConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *initialKeepAlives;
@property (nonatomic, readonly) NSMutableDictionary *sessions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TKTokenConnection *tokenConnection;

- (void).cxx_destruct;
- (void)endSession:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithTokenConnection:(id)arg1;
- (id)initialKeepAlives;
- (void)session:(id)arg1 createObjectWithAttributes:(id)arg2 reply:(id /* block */)arg3;
- (void)session:(id)arg1 deleteObjectWithObjectID:(id)arg2 reply:(id /* block */)arg3;
- (void)session:(id)arg1 evaluateAccessControl:(id)arg2 forOperation:(id)arg3 reply:(id /* block */)arg4;
- (void)session:(id)arg1 getAdvertisedItemsWithReply:(id /* block */)arg2;
- (void)session:(id)arg1 getAttributesOfObjectID:(id)arg2 reply:(id /* block */)arg3;
- (void)session:(id)arg1 objectID:(id)arg2 operation:(long long)arg3 data:(id)arg4 algorithms:(id)arg5 parameters:(id)arg6 reply:(id /* block */)arg7;
- (id)sessions;
- (void)startSessionWithLAContext:(id)arg1 parameters:(id)arg2 reply:(id /* block */)arg3;
- (id)tokenConnection;
- (void)withSessionID:(id)arg1 invoke:(id /* block */)arg2;

@end
