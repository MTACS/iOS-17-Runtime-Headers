
@interface CHSWidgetMetrics : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding> {
    double  _cornerRadius;
    unsigned long long  _dynamicTextSupport;
    long long  _fontStyle;
    CHSWidgetMargins * _margins;
    double  _scaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) struct CHSEdgeInsets { double x1; double x2; double x3; double x4; } contentMargins;
@property (nonatomic, readonly) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long dynamicTextSupport;
@property (nonatomic, readonly) long long fontStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CHSEdgeInsets { double x1; double x2; double x3; double x4; } layoutInsets;
@property (nonatomic, readonly, copy) CHSWidgetMargins *margins;
@property (nonatomic, readonly) struct CHSEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic, readonly) double scaleFactor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

+ (void)_removeSafeAreaInsetsIn:(id)arg1;
+ (void)_replaceFontStyleIn:(id)arg1 withTextSizeAdjustment:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_effectiveCornerRadius;
- (struct CGSize { double x1; double x2; })_effectiveSizePixelAlignedForDisplayScale:(double)arg1;
- (bool)_hasZeroLayoutInsets;
- (bool)_isUnitScale;
- (struct CGSize { double x1; double x2; })_rawEffectiveSize;
- (struct CGSize { double x1; double x2; })_rawLayoutInsetAdjustedSizePixelAlignedForDisplayScale:(double)arg1;
- (struct CGSize { double x1; double x2; })_rawSizePixelAlignedForDisplayScale:(double)arg1;
- (double)_roundToNearestOrUp:(double)arg1 withScale:(double)arg2;
- (id)_stringKeyRepresentation;
- (long long)compare:(id)arg1;
- (struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })contentMargins;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)dynamicTextSupport;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (long long)fontStyle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2 scale:(struct CGSize { double x1; double x2; })arg3 textSizeAdjustment:(long long)arg4;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2 scaleFactor:(double)arg3 fontStyle:(long long)arg4;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2 scaleFactor:(double)arg3 fontStyle:(long long)arg4 margins:(id)arg5 supportsDynamicText:(unsigned long long)arg6;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2 scaleFactor:(double)arg3 fontStyle:(long long)arg4 safeAreaInsets:(struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2 scaleFactor:(double)arg3 fontStyle:(long long)arg4 safeAreaInsets:(struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })arg5 layoutInsets:(struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })arg6 contentMargins:(struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })arg7 supportsDynamicText:(unsigned long long)arg8;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2 scaleFactor:(double)arg3 fontStyle:(long long)arg4 safeAreaInsets:(struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })arg5 supportsDynamicText:(unsigned long long)arg6;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2 scaleFactor:(double)arg3 textSizeAdjustment:(long long)arg4;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2 textSizeAdjustment:(long long)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })layoutInsets;
- (id)margins;
- (struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (struct CGSize { double x1; double x2; })scale;
- (double)scaleFactor;
- (struct CGSize { double x1; double x2; })size;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)textSizeAdjustment;

@end
