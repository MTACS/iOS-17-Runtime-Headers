
@interface IDSPseudonymProperties : NSObject <NSSecureCoding> {
    NSArray * _allowedServices;
    double  _expiryEpoch;
    NSString * _featureID;
    NSString * _scopeID;
}

@property (nonatomic, readonly) NSArray *allowedServices;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) double expiryEpoch;
@property (nonatomic, readonly) NSString *featureID;
@property (nonatomic, readonly) NSString *scopeID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedServices;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (double)expiryEpoch;
- (id)featureID;
- (bool)hasBeenExpiredForAtLeast:(double)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFeatureID:(id)arg1 scopeID:(id)arg2 expiryEpoch:(double)arg3 allowedServices:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPseudonymProperties:(id)arg1;
- (id)scopeID;
- (bool)willBeExpiredIn:(double)arg1;
- (id)withUpdatedAllowedServices:(id)arg1;
- (id)withUpdatedExpiryEpoch:(double)arg1;

@end
