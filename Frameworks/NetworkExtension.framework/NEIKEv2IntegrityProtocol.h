
@interface NEIKEv2IntegrityProtocol : NSObject <NSCopying> {
    unsigned long long  _type;
}

@property (readonly) unsigned long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
