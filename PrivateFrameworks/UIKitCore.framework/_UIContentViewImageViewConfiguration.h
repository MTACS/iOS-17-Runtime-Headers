
@interface _UIContentViewImageViewConfiguration : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        unsigned int hasCustomizedImage : 1; 
        unsigned int hasCustomizedPreferredSymbolConfiguration : 1; 
        unsigned int hasCustomizedTintColor : 1; 
        unsigned int hasCustomizedCornerRadius : 1; 
        unsigned int hasCustomizedReservedLayoutSize : 1; 
        unsigned int hasCustomizedMaximumSize : 1; 
    }  _configurationFlags;
    double  _cornerRadius;
    UIImage * _highlightedImage;
    UIImage * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    UIImageSymbolConfiguration * _preferredSymbolConfiguration;
    struct CGSize { 
        double width; 
        double height; 
    }  _reservedLayoutSize;
    UIColor * _tintColor;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIImage *highlightedImage;
@property (nonatomic) double horizontalCenteringWidth;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic, copy) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic) struct CGSize { double x1; double x2; } reservedLayoutSize;
@property (nonatomic, retain) UIColor *tintColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToImageView:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)highlightedImage;
- (double)horizontalCenteringWidth;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumSize;
- (id)preferredSymbolConfiguration;
- (struct CGSize { double x1; double x2; })reservedLayoutSize;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setHorizontalCenteringWidth:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1;
- (void)setReservedLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
