
@interface _CTSplicedFontKey : NSObject <NSCopying> {
    NSString * _design;
    unsigned int  _grade;
    unsigned long long  _hash;
    bool  _ignoreLegibilityWeight;
    NSString * _language;
    long long  _legibilityWeight;
    double  _lineHeightRatio;
    double  _lineSpacingOverride;
    unsigned int  _modifier;
    NSString * _name;
    unsigned int  _platform;
    unsigned long long  _sizeCategory;
    double  _weight;
    double  _width;
}

@property (nonatomic, retain) NSString *design;
@property (nonatomic) unsigned int grade;
@property (nonatomic) bool ignoreLegibilityWeight;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) long long legibilityWeight;
@property (nonatomic) double lineHeightRatio;
@property (nonatomic) double lineSpacingOverride;
@property (nonatomic) unsigned int modifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int platform;
@property (nonatomic) unsigned long long sizeCategory;
@property (nonatomic) double weight;
@property (nonatomic) double width;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)design;
- (unsigned int)grade;
- (unsigned long long)hash;
- (bool)ignoreLegibilityWeight;
- (bool)isEqual:(id)arg1;
- (id)language;
- (long long)legibilityWeight;
- (double)lineHeightRatio;
- (double)lineSpacingOverride;
- (unsigned int)modifier;
- (id)name;
- (unsigned int)platform;
- (void)setDesign:(id)arg1;
- (void)setGrade:(unsigned int)arg1;
- (void)setIgnoreLegibilityWeight:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLegibilityWeight:(long long)arg1;
- (void)setLineHeightRatio:(double)arg1;
- (void)setLineSpacingOverride:(double)arg1;
- (void)setModifier:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setPlatform:(unsigned int)arg1;
- (void)setSizeCategory:(unsigned long long)arg1;
- (void)setWeight:(double)arg1;
- (void)setWidth:(double)arg1;
- (unsigned long long)sizeCategory;
- (double)weight;
- (double)width;

@end
