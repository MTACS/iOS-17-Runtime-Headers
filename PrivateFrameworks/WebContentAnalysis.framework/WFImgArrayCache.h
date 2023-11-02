
@interface WFImgArrayCache : NSObject {
    NSMutableString * imageAlternativeDescriptions;
    long long  numberOfKnownImagePixels;
    long long  numberOfUnknownSizedImages;
}

+ (id)imgArrayCacheWithArray:(id)arg1;

- (void)dealloc;
- (id)imageAlternativeDescriptions;
- (id)initWithArray:(id)arg1;
- (long long)numberOfKnownImagePixels;
- (long long)numberOfUnknownSizedImages;

@end
