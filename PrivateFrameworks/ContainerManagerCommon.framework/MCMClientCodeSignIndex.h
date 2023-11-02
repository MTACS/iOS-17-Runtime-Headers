
@interface MCMClientCodeSignIndex : NSObject <NSCopying> {
    NSData * _cdhash;
    NSString * _identifier;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithCDHash:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToClientCodeSignIndex:(id)arg1;

@end
