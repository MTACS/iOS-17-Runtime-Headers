
@interface HKClinicalAccountProvenance : NSObject <NSCopying, NSSecureCoding> {
    HKClinicalGateway * _gateway;
    HKSignedClinicalDataIssuer * _signedClinicalDataIssuer;
}

@property (nonatomic, readonly) HKClinicalBrand *brand;
@property (nonatomic, readonly) HKClinicalGateway *gateway;
@property (nonatomic, readonly) HKSignedClinicalDataIssuer *signedClinicalDataIssuer;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)brand;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gateway;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGateway:(id)arg1;
- (id)initWithSignedClinicalDataIssuer:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)signedClinicalDataIssuer;
- (id)subtitle;
- (id)title;
- (long long)type;

@end
