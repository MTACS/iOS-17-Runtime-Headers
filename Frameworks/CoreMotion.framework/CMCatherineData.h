
@interface CMCatherineData : CMLogItem {
    double  _catherine;
    double  _confidence;
}

@property (nonatomic, readonly) double catherine;
@property (nonatomic, readonly) double confidence;

+ (bool)supportsSecureCoding;

- (double)catherine;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;

@end
