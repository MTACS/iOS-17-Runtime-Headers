
@interface _UIContentUnavailableViewCacheKey : NSObject <NSCopying> {
    struct CGColor { } * _color;
    unsigned long long  _style;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithStyle:(unsigned long long)arg1 color:(struct CGColor { }*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCacheKey:(id)arg1;

@end
