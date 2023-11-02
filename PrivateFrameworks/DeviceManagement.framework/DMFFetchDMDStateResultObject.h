
@interface DMFFetchDMDStateResultObject : CATTaskResultObject {
    NSString * _dmdStateDescription;
}

@property (nonatomic, copy) NSString *dmdStateDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dmdStateDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStateDescription:(id)arg1;
- (void)setDmdStateDescription:(id)arg1;

@end
