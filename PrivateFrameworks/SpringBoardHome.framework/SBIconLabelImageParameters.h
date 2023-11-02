
@interface SBIconLabelImageParameters : NSObject <NSCopying, NSMutableCopying> {
    bool  _accessibilityReduceTransparencyEnabled;
    bool  _canTighten;
    bool  _canTruncate;
    bool  _colorspaceGrayscale;
    bool  _colorspaceGrayscaleSet;
    bool  _containsEmoji;
    NSString * _contentSizeCategory;
    UIColor * _focusHighlightColor;
    UIFont * _font;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _fontLanguageInsets;
    unsigned long long  _hash;
    NSString * _iconLocation;
    long long  _legibilityStyle;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    bool  _recalculateHash;
    double  _scale;
    NSString * _text;
    UIColor * _textColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textInsets;
}

@property (getter=isAccessibilityReduceTransparencyEnabled, nonatomic, readonly) bool accessibilityReduceTransparencyEnabled;
@property (nonatomic, readonly) bool canTighten;
@property (nonatomic, readonly) bool canTruncate;
@property (getter=isColorspaceGrayscale, nonatomic, readonly) bool colorspaceGrayscale;
@property (nonatomic, readonly) bool containsEmoji;
@property (nonatomic, readonly, copy) NSString *contentSizeCategory;
@property (nonatomic, readonly) UIColor *focusHighlightColor;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } fontLanguageInsets;
@property (nonatomic, readonly) long long legibilityStyle;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textInsets;

- (void).cxx_destruct;
- (void)_noteNeedsHashRecalculation;
- (bool)canTighten;
- (bool)canTruncate;
- (bool)containsEmoji;
- (id)contentSizeCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)focusHighlightColor;
- (id)font;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fontLanguageInsets;
- (unsigned long long)hash;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (bool)isAccessibilityReduceTransparencyEnabled;
- (bool)isColorspaceGrayscale;
- (bool)isEqual:(id)arg1;
- (long long)legibilityStyle;
- (struct CGSize { double x1; double x2; })maxSize;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)scale;
- (id)text;
- (id)textColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textInsets;

@end
