
@interface SPCommandKeysCriteria : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSNumber * _hint;
    NSNumber * _index;
    NSArray * _indices;
    NSNumber * _sequence;
}

@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic, copy) NSNumber *hint;
@property (nonatomic, copy) NSNumber *index;
@property (nonatomic, copy) NSArray *indices;
@property (nonatomic, copy) NSNumber *sequence;

+ (id)driftModeledCriteria;
+ (id)matchDateInterval:(id)arg1;
+ (id)matchPrimaryIndices:(id)arg1;
+ (id)matchSecondaryIndex:(unsigned long long)arg1 hint:(unsigned char)arg2;
+ (id)matchSequence:(unsigned char)arg1 index:(unsigned int)arg2 hint:(unsigned char)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)hint;
- (id)index;
- (id)indices;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 sequence:(id)arg2 indices:(id)arg3 index:(id)arg4 hint:(id)arg5;
- (id)sequence;
- (void)setDateInterval:(id)arg1;
- (void)setHint:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)setIndices:(id)arg1;
- (void)setSequence:(id)arg1;

@end
