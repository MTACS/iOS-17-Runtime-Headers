
@interface GCGenericDeviceInputGamepadEventFieldModel : NSObject <NSCopying, NSSecureCoding> {
    long long  _extendedIndex;
    GCGenericDeviceDataProcessorExpressionModel * _sourceExpression;
}

@property (readonly) long long extendedIndex;
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *sourceExpression;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)extendedIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)sourceExpression;

@end
