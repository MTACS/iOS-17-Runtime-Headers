
@interface VN1vLyVSh30UQ26TGBoV8MHv : VNObservation {
    NSDictionary * _adjustments;
}

@property (readonly, copy) NSArray *adjustmentKeys;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adjustmentKeys;
- (id)adjustmentValuesForKey:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAdjustmentForKey:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 adjustments:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)vn_cloneObject;

@end
