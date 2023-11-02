
@interface HKSignedClinicalDataQRSegment : NSObject <NSCopying, NSSecureCoding> {
    NSString * _dataValue;
    long long  _numberOfExpectedSiblings;
    long long  _position;
}

@property (nonatomic, readonly, copy) NSString *dataValue;
@property (nonatomic, readonly, copy) NSString *fullQRCodeValue;
@property (nonatomic, readonly) long long numberOfExpectedSiblings;
@property (nonatomic, readonly) long long position;

+ (id)segmentFromQRCodeValue:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (void)encodeWithCoder:(id)arg1;
- (id)fullQRCodeValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataValue:(id)arg1 position:(long long)arg2 numberOfExpectedSiblings:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)numberOfExpectedSiblings;
- (long long)position;

@end
