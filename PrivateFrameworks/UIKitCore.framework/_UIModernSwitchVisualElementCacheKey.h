
@interface _UIModernSwitchVisualElementCacheKey : NSObject <NSCopying> {
    struct CGColor { } * _color;
    unsigned long long  _mask;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithMask:(unsigned long long)arg1 color:(struct CGColor { }*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCacheKey:(id)arg1;

@end
