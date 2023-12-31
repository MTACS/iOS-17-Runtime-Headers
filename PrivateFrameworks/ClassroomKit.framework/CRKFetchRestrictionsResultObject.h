
@interface CRKFetchRestrictionsResultObject : CATTaskResultObject {
    NSDictionary * _valuesByRestriction;
}

@property (nonatomic, copy) NSDictionary *valuesByRestriction;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValuesByRestriction:(id)arg1;
- (id)valuesByRestriction;

@end
