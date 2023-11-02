
@interface TKSEPClientTokenSession : TKClientTokenSession

@property (nonatomic, readonly) TKTokenID *tokenID;

- (id)createObjectWithAttributes:(id)arg1 error:(id*)arg2;
- (bool)forceSystemSession;
- (id)initWithToken:(id)arg1 LAContext:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (id)objectForObjectID:(id)arg1 error:(id*)arg2;
- (id)tokenID;

@end
