
@interface GCGenericDeviceDataInputElementAttributeExpressionModel : GCGenericDeviceDataProcessorExpressionModel {
    NSString * _attribute;
    NSString * _elementIdentifier;
}

@property (readonly, copy) NSString *attribute;
@property (readonly, copy) NSString *elementIdentifier;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attribute;
- (id)debugDescription;
- (id)description;
- (id)elementIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;

@end
