
@interface WFAQIScaleCategory : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _categoryIndex;
    NSString * _categoryName;
    unsigned long long  _categoryNumber;
    NSString * _color;
    NSString * _glyph;
    NSString * _localizedCategoryDescription;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _recommendation;
}

@property (nonatomic) unsigned long long categoryIndex;
@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic) unsigned long long categoryNumber;
@property (nonatomic, copy) NSString *color;
@property (nonatomic, readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *glyph;
@property (nonatomic, copy) NSString *localizedCategoryDescription;
@property (nonatomic, readonly, copy) NSString *longDescription;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, copy) NSString *recommendation;
@property (nonatomic, readonly, copy) NSString *scaleClassName;
@property (nonatomic, readonly) unsigned long long warningLevel;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)categoryIndex;
- (id)categoryName;
- (unsigned long long)categoryNumber;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)glyph;
- (id)initWithCategoryIndex:(unsigned long long)arg1 localizedCategoryDescription:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScaleCategory:(id)arg1;
- (id)localizedCategoryDescription;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)recommendation;
- (void)setCategoryIndex:(unsigned long long)arg1;
- (void)setCategoryName:(id)arg1;
- (void)setCategoryNumber:(unsigned long long)arg1;
- (void)setColor:(id)arg1;
- (void)setGlyph:(id)arg1;
- (void)setLocalizedCategoryDescription:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRecommendation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (id)longDescription;
- (id)scaleClassName;
- (unsigned long long)warningLevel;

@end
