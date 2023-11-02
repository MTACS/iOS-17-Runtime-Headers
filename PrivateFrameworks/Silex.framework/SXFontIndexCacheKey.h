
@interface SXFontIndexCacheKey : NSObject <NSCopying> {
    <SXFontAttributes> * _fontAttributes;
    long long  _fontSize;
}

@property (nonatomic, readonly) <SXFontAttributes> *fontAttributes;
@property (nonatomic, readonly) long long fontSize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fontAttributes;
- (long long)fontSize;
- (unsigned long long)hash;
- (id)initWithFontAttributes:(id)arg1 fontSize:(long long)arg2;
- (bool)isEqual:(id)arg1;

@end
