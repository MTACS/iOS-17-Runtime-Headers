
@interface _UITextFieldClearButtonCacheKey : NSObject <NSCopying> {
    struct CGColor { } * _color;
    int  _variant;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithVariant:(int)arg1 color:(struct CGColor { }*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCacheKey:(id)arg1;

@end
