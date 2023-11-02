
@interface TKClientTokenSession : NSObject {
    LAContext * _LAContext;
    id  __testing_AuthContextUsed;
    bool  __testing_AuthenticateInternally;
    bool  __testing_ForceAuthenticationNeeded;
    bool  _authenticateWhenNeeded;
    NSArray * _certificates;
    NSArray * _identities;
    NSArray * _keys;
    NSDictionary * _parameters;
    NSString * _slotName;
    TKClientToken * _token;
}

@property (nonatomic, retain) LAContext *LAContext;
@property (nonatomic, retain) id _testing_AuthContextUsed;
@property (nonatomic) bool _testing_AuthenticateInternally;
@property (nonatomic) bool _testing_ForceAuthenticationNeeded;
@property (nonatomic) bool authenticateWhenNeeded;
@property (nonatomic, readonly) NSArray *certificates;
@property (nonatomic, readonly) NSArray *identities;
@property (nonatomic, readonly) NSArray *keys;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) NSString *slotName;
@property (nonatomic, readonly) TKClientToken *token;

- (void).cxx_destruct;
- (id)LAContext;
- (id)_initWithToken:(id)arg1 LAContext:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (id)_testing_AuthContextUsed;
- (bool)_testing_AuthenticateInternally;
- (bool)_testing_ForceAuthenticationNeeded;
- (bool)authenticateWhenNeeded;
- (id)certificates;
- (id)createObjectWithAttributes:(id)arg1 error:(id*)arg2;
- (bool)deleteObject:(id)arg1 error:(id*)arg2;
- (bool)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 error:(id*)arg3;
- (id)identities;
- (id)initWithToken:(id)arg1 LAContext:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (id)initWithTokenID:(id)arg1 LAContext:(id)arg2 error:(id*)arg3;
- (bool)isValidWithError:(id*)arg1;
- (id)keys;
- (id)objectForObjectID:(id)arg1 error:(id*)arg2;
- (id)parameters;
- (id)processObjectCreationAttributes:(id)arg1 error:(id*)arg2;
- (void)setAuthenticateWhenNeeded:(bool)arg1;
- (void)setLAContext:(id)arg1;
- (void)set_testing_AuthContextUsed:(id)arg1;
- (void)set_testing_AuthenticateInternally:(bool)arg1;
- (void)set_testing_ForceAuthenticationNeeded:(bool)arg1;
- (id)slotName;
- (id)token;

@end
