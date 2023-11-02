
@interface PKPayLaterPreliminaryAssessment : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSArray * _installmentPlans;
    unsigned long long  _productType;
    bool  _reapplication;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *installmentPlans;
@property (nonatomic) unsigned long long productType;
@property (getter=isReapplication, nonatomic) bool reapplication;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 productType:(unsigned long long)arg2;
- (id)installmentPlans;
- (bool)isEqual:(id)arg1;
- (bool)isReapplication;
- (unsigned long long)productType;
- (void)setIdentifier:(id)arg1;
- (void)setInstallmentPlans:(id)arg1;
- (void)setProductType:(unsigned long long)arg1;
- (void)setReapplication:(bool)arg1;

@end
