
@interface _UIShadowViewImageCacheKey : NSObject <NSCopying> {
    unsigned long long  _options;
    double  _scale;
    double  _size;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithSize:(double)arg1 scale:(double)arg2 options:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCacheKey:(id)arg1;

@end
