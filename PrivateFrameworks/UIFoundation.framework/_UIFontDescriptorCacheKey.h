
@interface _UIFontDescriptorCacheKey : _UIFontCacheKey {
    UIFontDescriptor * _fontDescriptor;
    double  _maximumPointSizeAfterScaling;
    double  _pointSize;
    double  _pointSizeForScaling;
    bool  _textLegibility;
    NSString * _textStyleForScaling;
}

@property (nonatomic, copy) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double maximumPointSizeAfterScaling;
@property (nonatomic) double pointSize;
@property (nonatomic) double pointSizeForScaling;
@property (nonatomic) bool textLegibility;
@property (nonatomic, copy) NSString *textStyleForScaling;

- (unsigned long long)_hash;
- (bool)_isEqualToKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)fontDescriptor;
- (double)maximumPointSizeAfterScaling;
- (double)pointSize;
- (double)pointSizeForScaling;
- (void)setFontDescriptor:(id)arg1;
- (void)setMaximumPointSizeAfterScaling:(double)arg1;
- (void)setPointSize:(double)arg1;
- (void)setPointSizeForScaling:(double)arg1;
- (void)setTextLegibility:(bool)arg1;
- (void)setTextStyleForScaling:(id)arg1;
- (bool)textLegibility;
- (id)textStyleForScaling;

@end
