
@interface TKTokenDriver : NSObject {
    TKTokenDriverContext * _context;
    <TKTokenDriverDelegate> * _delegate;
    NSDictionary * _extensionAttributes;
    id  _keepAlive;
    TKSharedResourceSlot * _keepAliveResourceSlot;
    NSMutableDictionary * _tokenConnections;
}

@property (readonly) NSString *classID;
@property (nonatomic) TKTokenDriverContext *context;
@property <TKTokenDriverDelegate> *delegate;
@property (retain) NSDictionary *extensionAttributes;
@property (nonatomic, retain) id keepAlive;
@property (nonatomic, retain) TKSharedResourceSlot *keepAliveResourceSlot;
@property (nonatomic, readonly) NSMutableDictionary *tokenConnections;
@property (nonatomic, readonly) NSArray *tokenSessions;

+ (id)createDriver;

- (void).cxx_destruct;
- (void)acquireTokenWithInstanceID:(id)arg1 reply:(id /* block */)arg2;
- (void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(id /* block */)arg3;
- (void)auditAuthOperation:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 success:(bool)arg3;
- (id)classID;
- (void)configureWithReply:(id /* block */)arg1;
- (id)context;
- (id)createTokenWithSlot:(id)arg1 AID:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)delegate;
- (id)endpointForToken:(id)arg1;
- (id)extensionAttributes;
- (void)getTokenWithAttributes:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)keepAlive;
- (id)keepAliveResourceSlot;
- (void)releaseTokenWithInstanceID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtensionAttributes:(id)arg1;
- (void)setKeepAlive:(id)arg1;
- (void)setKeepAliveResourceSlot:(id)arg1;
- (void)terminate;
- (id)tokenConnections;
- (id)tokenSessions;

@end
