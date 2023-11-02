
@interface NEIKEv2DHProtocol : NSObject <NSCopying> {
    unsigned long long  _group;
}

@property (readonly) unsigned long long group;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)group;
- (unsigned long long)hash;
- (id)initWithGroup:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end
