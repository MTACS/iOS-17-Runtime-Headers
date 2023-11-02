
@interface NEFeedNavImageAssetHandle : NSObject {
    void fallbackImage;
    void feedNavImageSize;
    void feedNavImageStyler;
    void filePath;
    void overrideFallbackColor;
    void scale;
    void tag;
    void uniqueKey;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)arg1 feedNavImage:(id)arg2 feedNavImageSize:(struct CGSize { double x1; double x2; })arg3 feedNavImageStyler:(id)arg4 scale:(double)arg5;
- (id)initWithTag:(id)arg1 feedNavImageSize:(struct CGSize { double x1; double x2; })arg2 feedNavImageStyler:(id)arg3 scale:(double)arg4 overrideFallbackColor:(id)arg5;

@end
