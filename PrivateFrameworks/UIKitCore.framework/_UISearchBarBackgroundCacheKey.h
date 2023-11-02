
@interface _UISearchBarBackgroundCacheKey : NSObject <NSCopying> {
    double  _alpha;
    struct CGColor { } * _backgroundColor;
    long long  _barPosition;
    double  _height;
    double  _scale;
    double  _statusBarHeight;
    struct CGColor { } * _strokeColor;
    bool  _usesContiguousBarBackground;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithBarPosition:(long long)arg1 usesContiguousBarBackground:(bool)arg2 scale:(double)arg3 alpha:(double)arg4 height:(double)arg5 statusBarHeight:(double)arg6 backgroundColor:(struct CGColor { }*)arg7 strokeColor:(struct CGColor { }*)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCacheKey:(id)arg1;

@end
