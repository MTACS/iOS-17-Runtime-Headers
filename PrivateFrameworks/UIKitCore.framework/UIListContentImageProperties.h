
@interface UIListContentImageProperties : NSObject <NSCopying, NSSecureCoding> {
    bool  _accessibilityIgnoresInvertColors;
    double  _cornerRadius;
    UIImage * _image;
    struct { 
        unsigned int hasCustomizedPreferredSymbolConfiguration : 1; 
        unsigned int hasCustomizedTintColor : 1; 
        unsigned int hasCustomizedTintColorTransformer : 1; 
        unsigned int hasCustomizedCornerRadius : 1; 
        unsigned int hasCustomizedReservedLayoutSize : 1; 
        unsigned int hasCustomizedMaximumSize : 1; 
        unsigned int hasCustomizedAccessibilityIgnoresInvertColors : 1; 
        unsigned int hasCustomizedStrokeColor : 1; 
        unsigned int hasCustomizedStrokeColorTransformer : 1; 
        unsigned int hasCustomizedStrokeWidth : 1; 
    }  _imageFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    UIImageSymbolConfiguration * _preferredSymbolConfiguration;
    struct CGSize { 
        double width; 
        double height; 
    }  _reservedLayoutSize;
    UIColor * _strokeColor;
    id /* block */  _strokeColorTransformer;
    long long  _strokeColorTransformerIdentifier;
    double  _strokeWidth;
    UIColor * _tintColor;
    id /* block */  _tintColorTransformer;
    long long  _tintColorTransformerIdentifier;
}

@property (setter=_setStrokeColor:, nonatomic, retain) UIColor *_strokeColor;
@property (setter=_setStrokeColorTransformer:, nonatomic, copy) id /* block */ _strokeColorTransformer;
@property (setter=_setStrokeWidth:, nonatomic) double _strokeWidth;
@property (nonatomic) bool accessibilityIgnoresInvertColors;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic, copy) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic) struct CGSize { double x1; double x2; } reservedLayoutSize;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, copy) id /* block */ tintColorTransformer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_resolvedStrokeColorForTintColor:(id)arg1;
- (void)_setStrokeColor:(id)arg1;
- (void)_setStrokeColorTransformer:(id /* block */)arg1;
- (void)_setStrokeWidth:(double)arg1;
- (id)_strokeColor;
- (id /* block */)_strokeColorTransformer;
- (double)_strokeWidth;
- (bool)accessibilityIgnoresInvertColors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumSize;
- (id)preferredSymbolConfiguration;
- (struct CGSize { double x1; double x2; })reservedLayoutSize;
- (id)resolvedTintColorForTintColor:(id)arg1;
- (void)setAccessibilityIgnoresInvertColors:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1;
- (void)setReservedLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintColorTransformer:(id /* block */)arg1;
- (id)tintColor;
- (id /* block */)tintColorTransformer;

@end
