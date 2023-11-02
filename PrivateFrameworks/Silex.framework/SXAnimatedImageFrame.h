
@interface SXAnimatedImageFrame : NSObject {
    SXAnimatedImageViewCache * _cache;
    double  _duration;
    struct CGImageSource { } * _imageSource;
    long long  _imageType;
    unsigned long long  _index;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
