
@interface VUIResourceImageDescriptor : NSObject {
    NSString * _accessibilityText;
    double  _aspectRatio;
    UIColor * _borderColor;
    struct _VUICornerRadii { 
        double topLeft; 
        double topRight; 
        double bottomLeft; 
        double bottomRight; 
    }  _borderRadii;
    double  _borderWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    UIColor * _highlightColor;
    NSString * _name;
    bool  _renderAsTemplate;
    long long  _scaleMode;
    bool  _scaleToSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    UIImageSymbolConfiguration * _symbolConfiguration;
    UIColor * _tintColor;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *accessibilityText;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) struct _VUICornerRadii { double x1; double x2; double x3; double x4; } borderRadii;
@property (nonatomic) double borderWidth;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } containerSize;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, copy) NSString *name;
@property (getter=shouldRenderAsTemplate, nonatomic) bool renderAsTemplate;
@property (nonatomic) long long scaleMode;
@property (nonatomic) bool scaleToSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) UIImageSymbolConfiguration *symbolConfiguration;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)accessibilityText;
- (double)aspectRatio;
- (id)borderColor;
- (struct _VUICornerRadii { double x1; double x2; double x3; double x4; })borderRadii;
- (double)borderWidth;
- (struct CGSize { double x1; double x2; })containerSize;
- (id)highlightColor;
- (id)initWithResource:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithResource:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 containerSize:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithSymbol:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 symbolConfiguration:(id)arg3;
- (id)name;
- (long long)scaleMode;
- (bool)scaleToSize;
- (void)setAccessibilityText:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderRadii:(struct _VUICornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRenderAsTemplate:(bool)arg1;
- (void)setScaleMode:(long long)arg1;
- (void)setScaleToSize:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (bool)shouldRenderAsTemplate;
- (struct CGSize { double x1; double x2; })size;
- (id)symbolConfiguration;
- (id)tintColor;
- (unsigned long long)type;

@end
