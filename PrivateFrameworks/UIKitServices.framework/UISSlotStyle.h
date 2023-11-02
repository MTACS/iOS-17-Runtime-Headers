
@interface UISSlotStyle : NSObject <NSCopying, NSSecureCoding> {
    union { 
        unsigned int all; 
        struct { 
            unsigned int accessibilityButtonShapes : 1; 
            unsigned int accessibilityContrast : 1; 
            unsigned int displayRange : 2; 
            unsigned int displayScale : 3; 
            unsigned int layoutDirection : 1; 
            unsigned int legibilityWeight : 1; 
            unsigned int preferredContentSizeCategory : 4; 
            unsigned int userInterfaceIdiom : 3; 
            unsigned int userInterfaceStyle : 1; 
        } ; 
    }  _fields;
    NSString * _localization;
    struct CGColor { } * _tintColor;
}

@property (nonatomic, readonly) unsigned long long accessibilityButtonShapes;
@property (nonatomic, readonly) unsigned long long accessibilityContrast;
@property (nonatomic, readonly) NSArray *assetAppearanceNames;
@property (nonatomic, readonly) long long assetDeviceIdiom;
@property (nonatomic, readonly) long long assetLayoutDirection;
@property (nonatomic, readonly) double assetScaleFactor;
@property (nonatomic, readonly) unsigned long long displayRange;
@property (nonatomic, readonly) unsigned char displayScale;
@property (nonatomic, readonly) struct __CFString { }*fontContentSizeCategory;
@property (nonatomic, readonly) long long fontLegibilityWeight;
@property (nonatomic, readonly) double graphicsDisabledAlpha;
@property (nonatomic, readonly) bool hasAccessibilityContentSizeCategory;
@property (nonatomic, readonly) unsigned long long layoutDirection;
@property (nonatomic, readonly) unsigned long long legibilityWeight;
@property (nonatomic, readonly) NSString *localization;
@property (nonatomic, readonly) unsigned long long preferredContentSizeCategory;
@property (nonatomic, readonly) struct CGColor { }*tintColor;
@property (nonatomic, readonly) unsigned long long userInterfaceIdiom;
@property (nonatomic, readonly) unsigned long long userInterfaceStyle;

+ (id)slotStyleWithAccessibilityButtonShapes:(unsigned long long)arg1 accessibilityContrast:(unsigned long long)arg2 displayRange:(unsigned long long)arg3 displayScale:(unsigned char)arg4 layoutDirection:(unsigned long long)arg5 legibilityWeight:(unsigned long long)arg6 localization:(id)arg7 preferredContentSizeCategory:(unsigned long long)arg8 tintColor:(struct CGColor { }*)arg9 userInterfaceIdiom:(unsigned long long)arg10 userInterfaceStyle:(unsigned long long)arg11;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)accessibilityButtonShapes;
- (unsigned long long)accessibilityContrast;
- (id)assetAppearanceNames;
- (long long)assetDeviceIdiom;
- (id)assetGlyphWithName:(id)arg1 glyphSize:(long long)arg2 glyphWeight:(long long)arg3 glyphPointSize:(double)arg4;
- (id)assetGlyphWithName:(id)arg1 glyphSize:(long long)arg2 textStyle:(struct __CFString { }*)arg3;
- (long long)assetLayoutDirection;
- (double)assetScaleFactor;
- (id)copyWithChangeBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)displayRange;
- (unsigned char)displayScale;
- (void)encodeWithCoder:(id)arg1;
- (struct __CFString { }*)fontContentSizeCategory;
- (long long)fontLegibilityWeight;
- (unsigned long long)gradeWithOnlyFails:(unsigned long long)arg1 allowedLocalizations:(id)arg2;
- (double)graphicsDisabledAlpha;
- (bool)hasAccessibilityContentSizeCategory;
- (unsigned long long)hash;
- (id)initWithAccessibilityButtonShapes:(unsigned long long)arg1 accessibilityContrast:(unsigned long long)arg2 displayRange:(unsigned long long)arg3 displayScale:(unsigned char)arg4 layoutDirection:(unsigned long long)arg5 legibilityWeight:(unsigned long long)arg6 localization:(id)arg7 preferredContentSizeCategory:(unsigned long long)arg8 tintColor:(struct CGColor { }*)arg9 userInterfaceIdiom:(unsigned long long)arg10 userInterfaceStyle:(unsigned long long)arg11;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)layoutDirection;
- (unsigned long long)legibilityWeight;
- (id)localization;
- (struct __CTFont { }*)newFontForTextStyle:(struct __CFString { }*)arg1 attributes:(struct __CFDictionary { }*)arg2;
- (unsigned long long)preferredContentSizeCategory;
- (struct CGColor { }*)tintColor;
- (unsigned long long)userInterfaceIdiom;
- (unsigned long long)userInterfaceStyle;

@end
