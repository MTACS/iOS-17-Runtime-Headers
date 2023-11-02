
@interface WDMedicalRecordCategory : NSObject <NSCopying> {
    NSDictionary * _additionalPredicatesForCategory;
    HKUIMetricColors * _categoryMetricColors;
    long long  _categoryType;
    UIImage * _displayImage;
    NSString * _displayImageName;
    NSString * _displayName;
    NSArray * _sampleTypes;
}

@property (nonatomic, copy) NSDictionary *additionalPredicatesForCategory;
@property (nonatomic, retain) HKUIMetricColors *categoryMetricColors;
@property (nonatomic) long long categoryType;
@property (nonatomic, retain) UIImage *displayImage;
@property (nonatomic, copy) NSString *displayImageName;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSArray *sampleTypes;

- (void).cxx_destruct;
- (id)additionalPredicatesForCategory;
- (id)categoryMetricColors;
- (long long)categoryType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayImage;
- (id)displayImageName;
- (id)displayName;
- (id)initWithDictionary:(id)arg1;
- (id)sampleTypes;
- (void)setAdditionalPredicatesForCategory:(id)arg1;
- (void)setCategoryMetricColors:(id)arg1;
- (void)setCategoryType:(long long)arg1;
- (void)setDisplayImage:(id)arg1;
- (void)setDisplayImageName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setSampleTypes:(id)arg1;

@end
