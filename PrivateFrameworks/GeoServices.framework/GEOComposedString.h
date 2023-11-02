
@interface GEOComposedString : NSObject <NSCopying, NSSecureCoding> {
    GEOComposedString * _alternativeString;
    GEOComposedStringCondition * _alternativeStringCondition;
    NSArray * _arguments;
    NSArray * _formatStrings;
    NSArray * _formatStyles;
    bool  _isPrivate;
    NSArray * _separators;
}

@property (nonatomic, readonly) bool isPrivate;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)hasLocalizationProvider;
+ (id)localizationProvider;
+ (void)setLocalizationProvider:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stringForStrings:(id)arg1 joinedBySeparators:(id)arg2;
- (id)_stringResultWithOptions:(id)arg1 isFinalString:(bool)arg2;
- (void)_updateForFormatStylesInString:(id)arg1 options:(id)arg2;
- (bool)_updateString:(id)arg1 withArgument:(id)arg2 options:(id)arg3 results:(id)arg4 isFinalString:(bool)arg5;
- (id)composedStringWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultOptions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoFormattedString:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPrivate;
- (id)optionsWithArgumentHandler:(id /* block */)arg1;
- (id)stringResultWithOptions:(id)arg1;
- (id)stringWithDefaultOptions;
- (id)stringWithOptions:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (void)initialize;

@end
