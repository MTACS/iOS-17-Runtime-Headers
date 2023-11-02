
@interface DOCTagRenderingRequest : NSObject {
    bool  _allowUnsizedSymbolImages;
    unsigned long long  _clearTagRenderingMode;
    NSArray * _fillColors;
    double  _knockOutBorderWidth;
    long long  _layoutDirection;
    UIColor * _ringColor;
    UIColor * _selectionOutlineColor;
    unsigned long long  _spacingType;
    double  _tagDimension;
    NSArray * _tags;
    unsigned long long  _variant;
}

@property (nonatomic) bool allowUnsizedSymbolImages;
@property (nonatomic) unsigned long long clearTagRenderingMode;
@property (nonatomic, retain) NSArray *fillColors;
@property (nonatomic) double knockOutBorderWidth;
@property (nonatomic) long long layoutDirection;
@property (nonatomic, retain) UIColor *ringColor;
@property (nonatomic, retain) UIColor *selectionOutlineColor;
@property (nonatomic) unsigned long long spacingType;
@property (nonatomic) double tagDimension;
@property (nonatomic, retain) NSArray *tags;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic) unsigned long long variant;

+ (id)requestForChainedTags:(id)arg1 tagDimension:(double)arg2;
+ (id)requestForTag:(id)arg1 tagDimension:(double)arg2;
+ (id)requestForTag:(id)arg1 tagDimension:(double)arg2 variant:(unsigned long long)arg3;
+ (id)requestWithTagDimension:(double)arg1;

- (void).cxx_destruct;
- (id)_UIImageCacheKeyWithAdditionalComponents:(id)arg1;
- (bool)allowUnsizedSymbolImages;
- (unsigned long long)clearTagRenderingMode;
- (id)fillColors;
- (id)init;
- (double)knockOutBorderWidth;
- (long long)layoutDirection;
- (id)ringColor;
- (id)selectionOutlineColor;
- (void)setAllowUnsizedSymbolImages:(bool)arg1;
- (void)setClearTagRenderingMode:(unsigned long long)arg1;
- (void)setFillColors:(id)arg1;
- (void)setKnockOutBorderWidth:(double)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setRingColor:(id)arg1;
- (void)setSelectionOutlineColor:(id)arg1;
- (void)setSpacingType:(unsigned long long)arg1;
- (void)setTagDimension:(double)arg1;
- (void)setTags:(id)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (unsigned long long)spacingType;
- (double)tagDimension;
- (id)tags;
- (id)traitCollection;
- (unsigned long long)variant;

@end
