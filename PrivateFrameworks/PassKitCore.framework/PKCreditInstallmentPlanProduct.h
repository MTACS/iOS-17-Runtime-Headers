
@interface PKCreditInstallmentPlanProduct : NSObject <NSCopying, NSSecureCoding> {
    NSString * _capacity;
    NSString * _color;
    NSSet * _features;
    NSDictionary * _iconURLs;
    NSString * _identifier;
    NSString * _model;
    NSString * _serialNumber;
    NSDictionary * _splashImageURLs;
    bool  _upgradeEligible;
    unsigned long long  _warrantyYears;
}

@property (nonatomic, copy) NSString *capacity;
@property (nonatomic, copy) NSString *color;
@property (nonatomic, copy) NSSet *features;
@property (nonatomic, copy) NSDictionary *iconURLs;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, copy) NSDictionary *splashImageURLs;
@property (getter=isUpgradeEligible, nonatomic) bool upgradeEligible;
@property (nonatomic) unsigned long long warrantyYears;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_imageURLFromImageURLs:(id)arg1 forScale:(double)arg2 suffix:(id)arg3;
- (id)capacity;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)features;
- (unsigned long long)hash;
- (id)iconURLForScale:(double)arg1 suffix:(id)arg2;
- (id)iconURLs;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInstallmentPlanProduct:(id)arg1;
- (bool)isUpgradeEligible;
- (id)model;
- (id)serialNumber;
- (void)setCapacity:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setIconURLs:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSplashImageURLs:(id)arg1;
- (void)setUpgradeEligible:(bool)arg1;
- (void)setWarrantyYears:(unsigned long long)arg1;
- (id)splashImageURLForScale:(double)arg1 suffix:(id)arg2;
- (id)splashImageURLs;
- (unsigned long long)warrantyYears;

@end
