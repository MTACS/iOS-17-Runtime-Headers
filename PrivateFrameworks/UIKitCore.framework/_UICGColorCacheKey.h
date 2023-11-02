
@interface _UICGColorCacheKey : NSObject <NSCopying> {
    struct __CFArray { } * _colors;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithColors:(struct CGColor { }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCacheKey:(id)arg1;

@end
