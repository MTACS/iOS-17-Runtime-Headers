
@interface LAAccessKey : NSObject {
    LAACL * _acl;
    NSString * _identifier;
    <LAKeyStoreKey> * _key;
}

@property (nonatomic, readonly) LAACL *acl;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)acl;
- (void)armInContext:(id)arg1 completion:(id /* block */)arg2;
- (void)armInContext:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)identifier;
- (id)initWithACL:(id)arg1;
- (id)initWithKey:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)unlockKey:(id)arg1 inContext:(id)arg2 userInfo:(id)arg3 completion:(id /* block */)arg4;

@end
