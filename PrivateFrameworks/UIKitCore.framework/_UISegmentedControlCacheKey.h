
@interface _UISegmentedControlCacheKey : NSObject <NSCopying> {
    double  _cornerRadius;
    struct CGColor { } * _primaryColor;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned long long  _state;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCornerRadius:(double)arg1 capSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 state:(unsigned long long)arg4 primaryColor:(struct CGColor { }*)arg5;
- (id)initWithSize:(int)arg1 scale:(double)arg2 primaryColor:(struct CGColor { }*)arg3 background:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCacheKey:(id)arg1;

@end
