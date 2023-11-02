
@interface RTLocationOfInterestEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    bool  _ascending;
    unsigned long long  _batchSize;
    NSDateInterval * _dateInterval;
    bool  _wrappedVisit;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) unsigned long long batchSize;
@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly) bool wrappedVisit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)ascending;
- (unsigned long long)batchSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAscending:(bool)arg1 batchSize:(unsigned long long)arg2 dateInterval:(id)arg3 wrappedVisit:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id /* block */)processingBlock;
- (void)setDateInterval:(id)arg1;
- (bool)wrappedVisit;

@end
