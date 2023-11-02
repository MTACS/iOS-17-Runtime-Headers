
@interface LNSnippetEnvironment : NSObject <NSSecureCoding> {
    bool  _accessibilityDifferentiateWithoutColor;
    bool  _accessibilityInvertColors;
    bool  _accessibilityReduceMotion;
    bool  _accessibilityReduceTransparency;
    long long  _colorScheme;
    long long  _colorSchemeContrast;
    long long  _displayGamut;
    double  _displayScale;
    long long  _dynamicTypeSize;
    long long  _layoutDirection;
    long long  _legibilityWeight;
    NSLocale * _locale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) bool accessibilityDifferentiateWithoutColor;
@property (nonatomic, readonly) bool accessibilityInvertColors;
@property (nonatomic, readonly) bool accessibilityReduceMotion;
@property (nonatomic, readonly) bool accessibilityReduceTransparency;
@property (nonatomic, readonly) long long colorScheme;
@property (nonatomic, readonly) long long colorSchemeContrast;
@property (nonatomic, readonly) long long displayGamut;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) long long dynamicTypeSize;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) long long legibilityWeight;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accessibilityDifferentiateWithoutColor;
- (bool)accessibilityInvertColors;
- (bool)accessibilityReduceMotion;
- (bool)accessibilityReduceTransparency;
- (long long)colorScheme;
- (long long)colorSchemeContrast;
- (long long)displayGamut;
- (double)displayScale;
- (long long)dynamicTypeSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 locale:(id)arg2 dynamicTypeSize:(long long)arg3 legibilityWeight:(long long)arg4 layoutDirection:(long long)arg5 colorScheme:(long long)arg6 colorSchemeContrast:(long long)arg7 displayScale:(double)arg8 displayGamut:(long long)arg9 accessibilityDifferentiateWithoutColor:(bool)arg10 accessibilityInvertColors:(bool)arg11 accessibilityReduceMotion:(bool)arg12 accessibilityReduceTransparency:(bool)arg13;
- (bool)isEqual:(id)arg1;
- (long long)layoutDirection;
- (long long)legibilityWeight;
- (id)locale;
- (struct CGSize { double x1; double x2; })size;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 locale:(id)arg2 traitCollection:(id)arg3;

@end
