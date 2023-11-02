
@interface TKClientTokenObject : NSObject {
    NSData * _accessControl;
    id  _accessControlRef;
    NSDictionary * _keychainAttributes;
    NSData * _objectID;
    NSData * _publicKey;
    TKClientTokenSession * _session;
    NSData * _value;
}

@property (nonatomic, readonly) NSData *accessControl;
@property (nonatomic, readonly) struct __SecAccessControl { }*accessControlRef;
@property (nonatomic, readonly) NSDictionary *keychainAttributes;
@property (nonatomic, readonly) NSData *objectID;
@property (nonatomic, readonly) NSData *publicKey;
@property (nonatomic, readonly) TKClientTokenSession *session;
@property (nonatomic, readonly) NSData *value;

- (void).cxx_destruct;
- (id)accessControl;
- (struct __SecAccessControl { }*)accessControlRef;
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id*)arg3;
- (id)attestKeyObject:(id)arg1 nonce:(id)arg2 error:(id*)arg3;
- (bool)bumpKeyWithError:(id*)arg1;
- (bool)commitKeyWithError:(id*)arg1;
- (id)decrypt:(id)arg1 algorithms:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (bool)deleteWithError:(id*)arg1;
- (id)exchangeKey:(id)arg1 algorithms:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (id)initWithSession:(id)arg1 objectID:(id)arg2 attributes:(id)arg3;
- (id)keychainAttributes;
- (id)objectID;
- (id)operation:(long long)arg1 data:(id)arg2 algorithms:(id)arg3 parameters:(id)arg4 error:(id*)arg5;
- (id)operationResult:(id)arg1 error:(id*)arg2;
- (id)publicKey;
- (id)session;
- (id)sign:(id)arg1 algorithms:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (id)value;

@end
