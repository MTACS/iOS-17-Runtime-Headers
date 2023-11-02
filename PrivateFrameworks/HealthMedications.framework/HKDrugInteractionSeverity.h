
@interface HKDrugInteractionSeverity : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _severityLevel;
    NSSet * _validRegionCodes;
}

@property (nonatomic, readonly) unsigned long long severityLevel;
@property (nonatomic, readonly, copy) NSSet *validRegionCodes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeverityLevel:(unsigned long long)arg1 validRegionCodes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)severityLevel;
- (id)validRegionCodes;

@end
