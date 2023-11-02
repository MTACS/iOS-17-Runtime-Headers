
@interface MXMSample : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _attributes;
    NSData * _date;
    unsigned long long  _length;
    MXMSampleTag * _tag;
    unsigned long long  _timestamp;
    NSData * _underlyingValue;
    unsigned long long  _underlyingValueLength;
    NSUnit * _unit;
    unsigned long long  _valueType;
}

@property (nonatomic, readonly, copy) NSMeasurement *asMeasurementValue;
@property (nonatomic, readonly, copy) NSNumber *asNumberValue;
@property (nonatomic, readonly, copy) NSSet *attributes;
@property (nonatomic, readonly) NSData *date;
@property (nonatomic, readonly) double floatValue;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly, copy) NSString *shortDesc;
@property (nonatomic, readonly) MXMSampleTag *tag;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly, copy) NSUnit *unit;
@property (nonatomic, readonly) unsigned long long unsignedValue;
@property (nonatomic, readonly) unsigned long long valueType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asMeasurementValue;
- (id)asNumberValue;
- (id)attributeWithName:(id)arg1;
- (id)attributes;
- (id)convertToUnit:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)floatValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 unit:(id)arg4;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 unit:(id)arg4 timestamp:(unsigned long long)arg5;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 pixelBufferValue:(struct __CVBuffer { }*)arg3;
- (long long)integerValue;
- (unsigned long long)length;
- (id)shortDesc;
- (id)tag;
- (unsigned long long)timestamp;
- (id)unit;
- (unsigned long long)unsignedValue;
- (unsigned long long)valueType;

@end
