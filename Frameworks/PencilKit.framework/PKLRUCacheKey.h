
@interface PKLRUCacheKey : NSObject <NSCopying> {
    NSObject<NSCopying> * _key;
    long long  _scaleFactor;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
