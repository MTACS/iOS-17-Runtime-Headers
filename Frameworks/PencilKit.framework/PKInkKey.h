
@interface PKInkKey : NSObject <NSCopying> {
    NSString * _identifier;
    NSString * _variant;
    unsigned long long  _version;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
