
@interface ASCSignpostSpan : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    NSMutableSet * _mutableSupplementaryTags;
    unsigned long long  _primaryTag;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateRange;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, readonly) NSMutableSet *mutableSupplementaryTags;
@property (nonatomic, readonly) unsigned long long primaryTag;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, readonly, copy) NSSet *supplementaryTags;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSupplementaryTag:(unsigned long long)arg1;
- (void)beginEmitting;
- (id)dateRange;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (void)endEmitting;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableSupplementaryTags;
- (unsigned long long)primaryTag;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (id)supplementaryTags;

@end
