
@interface _UIStackedImageShadowImageKey : NSObject {
    double  _alpha;
    double  _cornerRadius;
    bool  _isContinuousCorner;
    double  _shadowRadius;
    double  _white;
}

+ (id)keyWithShadowRadius:(double)arg1 cornerRadius:(double)arg2 isContinuousCorner:(bool)arg3 white:(double)arg4 alpha:(double)arg5;

- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
