
@interface NEIKEv2EAPProtocol : NSObject <NSCopying> {
    unsigned long long  _method;
    NSDictionary * _properties;
}

@property (readonly) unsigned long long method;
@property (retain) NSDictionary *properties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMethod:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)method;
- (id)properties;
- (void)setProperties:(id)arg1;

@end
