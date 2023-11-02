
@interface _UIActivityIndicatorViewArtworkCacheKey : NSObject <NSCopying> {
    struct CGColor { } * _color;
    struct CGColor { } * _shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    long long  _spokeCount;
    long long  _spokeFrameRatio;
    long long  _style;
    double  _width;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithStyle:(long long)arg1 width:(double)arg2 spokeCount:(long long)arg3 spokeFrameRatio:(long long)arg4 shadowOffset:(struct CGSize { double x1; double x2; })arg5 color:(struct CGColor { }*)arg6 shadowColor:(struct CGColor { }*)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCacheKey:(id)arg1;

@end
