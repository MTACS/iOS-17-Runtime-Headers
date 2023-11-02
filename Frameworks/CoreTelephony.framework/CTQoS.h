
@interface CTQoS : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _bitRateMax;
    NSNumber * _bitRateMin;
    NSArray * _filters;
    NSNumber * _qci;
}

@property (nonatomic, retain) NSNumber *bitRateMax;
@property (nonatomic, retain) NSNumber *bitRateMin;
@property (nonatomic, retain) NSArray *filters;
@property (nonatomic, readonly) NSNumber *gbr;
@property (nonatomic, retain) NSNumber *qci;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bitRateMax;
- (id)bitRateMin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filters;
- (id)gbr;
- (id)initWithCoder:(id)arg1;
- (id)qci;
- (void)setBitRateMax:(id)arg1;
- (void)setBitRateMin:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setQci:(id)arg1;

@end
