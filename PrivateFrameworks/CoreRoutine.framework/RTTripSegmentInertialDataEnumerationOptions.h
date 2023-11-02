
@interface RTTripSegmentInertialDataEnumerationOptions : RTEnumerationOptions <NSCopying> {
    NSDateInterval * _dateInterval;
}

@property (nonatomic, copy) NSDateInterval *dateInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOptions:(id)arg1;
- (id /* block */)processingBlock;
- (void)setDateInterval:(id)arg1;

@end
