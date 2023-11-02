
@interface SRFaceMetricsExpression : NSObject <NSCopying, NSSecureCoding, SRSampling> {
    NSString * _identifier;
    double  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double value;

+ (id)new;
+ (id)partialFaceMetricsExpressionWithIdentifier:(id)arg1 value:(double)arg2;
+ (bool)supportsSecureCoding;
+ (id)wholeFaceMetricsExpressionWithIdentifier:(id)arg1 value:(double)arg2;

- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 value:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)value;

@end
