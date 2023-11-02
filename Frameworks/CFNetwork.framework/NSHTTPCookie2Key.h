
@interface NSHTTPCookie2Key : NSObject <NSCopying> {
    NSString * _domain;
    NSString * _name;
    NSString * _partition;
    NSString * _path;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
