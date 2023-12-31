
@interface DMFFetchActivationLockBypassCodeResultObject : CATTaskResultObject {
    NSString * _bypassCode;
}

@property (nonatomic, readonly, copy) NSString *bypassCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bypassCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBypassCode:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
