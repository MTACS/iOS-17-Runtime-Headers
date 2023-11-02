
@interface HKConceptResolutionDefinition : NSObject <NSCopying, NSSecureCoding> {
    HKMedicalCodingCollection * _codingCollection;
    NSString * _countryCode;
    long long  _recordCategoryType;
}

@property (nonatomic, readonly, copy) HKMedicalCodingCollection *codingCollection;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly) long long recordCategoryType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)codingCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodingCollection:(id)arg1 countryCode:(id)arg2;
- (id)initWithCodingCollection:(id)arg1 countryCode:(id)arg2 recordCategoryType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)recordCategoryType;

@end
