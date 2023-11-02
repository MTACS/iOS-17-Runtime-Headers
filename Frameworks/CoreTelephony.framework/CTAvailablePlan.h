
@interface CTAvailablePlan : CTPlan {
    NSString * _iccid;
}

@property (nonatomic, readonly) NSString *iccid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iccid;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
