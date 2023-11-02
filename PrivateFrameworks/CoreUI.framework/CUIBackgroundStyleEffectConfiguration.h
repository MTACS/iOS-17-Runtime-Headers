
@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    NSString * _backgroundType;
    bool  _effectShowsValue;
    int  _shouldRespectOutputBlending;
}

@property (nonatomic, copy) NSString *backgroundType;
@property (nonatomic) bool effectShowsValue;

- (id)backgroundType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)effectShowsValue;
- (id)init;
- (void)setBackgroundType:(id)arg1;
- (void)setEffectShowsValue:(bool)arg1;
- (void)setSelectionType:(long long)arg1;
- (void)setShouldRespectOutputBlending:(bool)arg1;
- (bool)shouldIgnoreForegroundColor;
- (bool)shouldRespectOutputBlending;

@end
