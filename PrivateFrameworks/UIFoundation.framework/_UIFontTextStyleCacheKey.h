
@interface _UIFontTextStyleCacheKey : _UIFontCacheKey {
    NSString * _contentSizeCategory;
    bool  _textLegibility;
    NSString * _textStyle;
}

@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic) bool textLegibility;
@property (nonatomic, copy) NSString *textStyle;

- (unsigned long long)_hash;
- (bool)_isEqualToKey:(id)arg1;
- (id)contentSizeCategory;
- (void)dealloc;
- (id)description;
- (void)setContentSizeCategory:(id)arg1;
- (void)setTextLegibility:(bool)arg1;
- (void)setTextStyle:(id)arg1;
- (bool)textLegibility;
- (id)textStyle;

@end
