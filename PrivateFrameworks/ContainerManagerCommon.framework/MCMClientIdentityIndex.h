
@interface MCMClientIdentityIndex : NSObject <NSCopying> {
    NSData * _auditToken;
    NSString * _personaUniqueString;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1 personaUniqueString:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToClientIdentityIndex:(id)arg1;

@end
