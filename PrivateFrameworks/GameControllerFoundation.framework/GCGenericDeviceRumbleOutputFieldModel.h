
@interface GCGenericDeviceRumbleOutputFieldModel : NSObject <NSCopying, NSSecureCoding> {
    GCGenericDeviceDataProcessorExpressionModel * _offsetExpression;
    GCGenericDeviceDataProcessorExpressionModel * _sizeExpression;
    GCGenericDeviceDataProcessorExpressionModel * _valueExpression;
}

@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *offsetExpression;
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *sizeExpression;
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *valueExpression;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)offsetExpression;
- (id)sizeExpression;
- (id)valueExpression;

@end
