
@interface _UIImageViewPretiledImageCacheKey : NSObject {
    UIImage * _originalImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _pretiledSize;
}

+ (id)cacheKeyWithOriginalImage:(id)arg1 pretiledSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
