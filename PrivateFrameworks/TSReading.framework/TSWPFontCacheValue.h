
@interface TSWPFontCacheValue : NSObject {
    struct __CTFont { } * _ctFont;
}

@property (nonatomic, readonly) struct __CTFont { }*ctFont;

+ (id)cacheValueWithCTFont:(struct __CTFont { }*)arg1;

- (struct __CTFont { }*)ctFont;
- (void)dealloc;
- (id)initWithCTFont:(struct __CTFont { }*)arg1;

@end
