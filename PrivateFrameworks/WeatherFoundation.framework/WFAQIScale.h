
@interface WFAQIScale : NSObject <NSCopying, NSSecureCoding> {
    bool  _ascending;
    NSArray * _categories;
    NSString * _displayLabel;
    NSString * _displayName;
    WFAQIScaleGradient * _gradient;
    NSString * _identifier;
    bool  _numerical;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (getter=isAscending, nonatomic) bool ascending;
@property (nonatomic, copy) NSArray *categories;
@property (nonatomic, copy) NSString *displayLabel;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) WFAQIScaleGradient *gradient;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isNumerical, nonatomic) bool numerical;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)categories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)displayLabel;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)gradient;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isAscending;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScale:(id)arg1;
- (bool)isNumerical;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setAscending:(bool)arg1;
- (void)setCategories:(id)arg1;
- (void)setDisplayLabel:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGradient:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNumerical:(bool)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
