
@interface RTStoredElevationEnumerationOptions : RTEnumerationOptions <NSCopying> {
    unsigned long long  _batchSize;
    NSDateInterval * _dateInterval;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 batchSize:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOptions:(id)arg1;
- (id /* block */)processingBlock;

@end
