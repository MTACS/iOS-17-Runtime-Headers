
@interface _SUUIViewElementTextLayoutCacheBestGuessCacheKey : NSObject {
    UIFont * _font;
    NSString * _text;
    long long  _width;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) long long width;

- (void).cxx_destruct;
- (id)font;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setWidth:(long long)arg1;
- (id)text;
- (long long)width;

@end
