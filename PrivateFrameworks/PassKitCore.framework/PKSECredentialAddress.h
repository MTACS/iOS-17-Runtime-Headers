
@interface PKSECredentialAddress : NSObject <NSCopying> {
    NSString * _identifier;
    PKSECredentialAddress * _next;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *appletIdentifier;
@property (nonatomic, readonly) NSString *mostSpecificIdentifier;
@property (nonatomic, readonly) unsigned long long mostSpecificType;
@property (nonatomic, readonly) NSString *subcredentialIdentifier;

- (void).cxx_destruct;
- (id)addressByAppendingType:(unsigned long long)arg1 identifier:(id)arg2;
- (void)appendType:(unsigned long long)arg1 identifier:(id)arg2;
- (id)appletIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)firstIdentifierOfType:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mostSpecificIdentifier;
- (unsigned long long)mostSpecificType;
- (id)shortDescription;
- (id)subcredentialIdentifier;

@end
