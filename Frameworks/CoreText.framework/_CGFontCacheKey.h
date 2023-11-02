
@interface _CGFontCacheKey : NSObject <NSCopying> {
    unsigned long long  _hash;
    double  _opticalSize;
    NSURL * _url;
}

@property (nonatomic, readonly) double opticalSize;
@property (nonatomic, readonly) NSURL *url;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)opticalSize;
- (id)url;

@end
