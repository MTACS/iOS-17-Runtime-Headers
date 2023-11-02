
@interface _UIFontNameCacheKey : _UIFontCacheKey {
    NSString * _fontName;
    double  _pointSize;
    int  _traits;
}

@property (nonatomic, copy) NSString *fontName;
@property (nonatomic) double pointSize;
@property (nonatomic) int traits;

- (unsigned long long)_hash;
- (bool)_isEqualToKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)fontName;
- (double)pointSize;
- (void)setFontName:(id)arg1;
- (void)setPointSize:(double)arg1;
- (void)setTraits:(int)arg1;
- (int)traits;

@end
