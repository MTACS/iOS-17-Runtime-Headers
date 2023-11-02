
@interface CTQoSLinkCharacteristics : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _bitRateGuaranteedDL;
    NSNumber * _bitRateGuaranteedUL;
    NSNumber * _bitRateMaxDL;
    NSNumber * _bitRateMaxUL;
}

@property (nonatomic, retain) NSNumber *bitRateGuaranteedDL;
@property (nonatomic, retain) NSNumber *bitRateGuaranteedUL;
@property (nonatomic, retain) NSNumber *bitRateMaxDL;
@property (nonatomic, retain) NSNumber *bitRateMaxUL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bitRateGuaranteedDL;
- (id)bitRateGuaranteedUL;
- (id)bitRateMaxDL;
- (id)bitRateMaxUL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setBitRateGuaranteedDL:(id)arg1;
- (void)setBitRateGuaranteedUL:(id)arg1;
- (void)setBitRateMaxDL:(id)arg1;
- (void)setBitRateMaxUL:(id)arg1;

@end
