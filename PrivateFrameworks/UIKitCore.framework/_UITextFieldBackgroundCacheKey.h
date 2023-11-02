
@interface _UITextFieldBackgroundCacheKey : NSObject <NSCopying> {
    NSString * _className;
    double  _cornerRadius;
    struct CGColor { } * _fillColor;
    double  _lineWidth;
    double  _scale;
    struct CGColor { } * _strokeColor;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithClassName:(id)arg1 scale:(double)arg2 cornerRadius:(double)arg3 lineWidth:(double)arg4 strokeColor:(struct CGColor { }*)arg5 fillColor:(struct CGColor { }*)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCacheKey:(id)arg1;

@end
