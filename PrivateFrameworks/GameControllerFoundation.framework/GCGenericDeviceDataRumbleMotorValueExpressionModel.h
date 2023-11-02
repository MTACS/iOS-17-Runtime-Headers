
@interface GCGenericDeviceDataRumbleMotorValueExpressionModel : GCGenericDeviceDataProcessorExpressionModel {
    NSString * _motorName;
}

@property (readonly, copy) NSString *motorName;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)motorName;
- (id)redactedDescription;

@end
