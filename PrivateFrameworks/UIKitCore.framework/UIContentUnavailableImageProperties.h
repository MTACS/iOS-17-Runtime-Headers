
@interface UIContentUnavailableImageProperties : NSObject <NSCopying, NSSecureCoding> {
    bool  _accessibilityIgnoresInvertColors;
    double  _cornerRadius;
    UIImage * _image;
    struct { 
        unsigned int hasCustomizedPreferredSymbolConfiguration : 1; 
        unsigned int hasCustomizedTintColor : 1; 
        unsigned int hasCustomizedCornerRadius : 1; 
        unsigned int hasCustomizedMaximumSize : 1; 
        unsigned int hasCustomizedAccessibilityIgnoresInvertColors : 1; 
    }  _imageFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    UIImageSymbolConfiguration * _preferredSymbolConfiguration;
    UIColor * _tintColor;
}

@property (nonatomic) bool accessibilityIgnoresInvertColors;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic, copy) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic, retain) UIColor *tintColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
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
- (void)setAccessibilityIgnoresInvertColors:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
