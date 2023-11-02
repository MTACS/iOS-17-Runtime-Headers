
@interface RTStoredHintEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    bool  _ascending;
    unsigned long long  _batchSize;
    NSDateInterval * _dateInterval;
    NSNumber * _distance;
    unsigned long long  _limit;
    RTLocation * _referenceLocation;
    NSNumber * _sourceFilter;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSNumber *distance;
@property (nonatomic, readonly) unsigned long long limit;
@property (nonatomic, readonly) RTLocation *referenceLocation;
@property (nonatomic, readonly) NSNumber *sourceFilter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)ascending;
- (unsigned long long)batchSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (id)distance;
- (void)encodeWithCoder:(id)arg1;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferenceLocation:(id)arg1 ascending:(bool)arg2 dateInterval:(id)arg3 limit:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (id)initWithReferenceLocation:(id)arg1 sourceFilter:(id)arg2 ascending:(bool)arg3 dateInterval:(id)arg4 limit:(unsigned long long)arg5 batchSize:(unsigned long long)arg6;
- (id)initWithReferenceLocation:(id)arg1 sourceFilter:(id)arg2 ascending:(bool)arg3 distance:(id)arg4 dateInterval:(id)arg5 limit:(unsigned long long)arg6 batchSize:(unsigned long long)arg7;
- (bool)isEqual:(id)arg1;
- (unsigned long long)limit;
- (id)referenceLocation;
- (id)sourceFilter;

@end
