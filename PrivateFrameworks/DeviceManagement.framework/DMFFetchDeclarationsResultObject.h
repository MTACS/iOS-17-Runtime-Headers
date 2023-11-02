
@interface DMFFetchDeclarationsResultObject : CATTaskResultObject {
    NSArray * _payloadDescriptions;
}

@property (nonatomic, copy) NSArray *payloadDescriptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)payloadDescriptions;
- (void)setPayloadDescriptions:(id)arg1;

@end
