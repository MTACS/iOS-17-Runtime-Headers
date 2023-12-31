
@interface _UIImageViewPretiledImageWrapper : NSObject {
    _UIImageViewPretiledImageCacheKey * _cacheKey;
    UIImage * _pretiledImage;
}

@property (nonatomic, readonly) UIImage *pretiledImage;

+ (id)cacheValueWithPretiledImage:(id)arg1 cacheKey:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)pretiledImage;

@end
