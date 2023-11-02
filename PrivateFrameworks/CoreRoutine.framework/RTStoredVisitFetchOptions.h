
@interface RTStoredVisitFetchOptions : NSObject <NSSecureCoding> {
    bool  _ascending;
    NSNumber * _confidence;
    NSDateInterval * _dateInterval;
    bool  _labelVisit;
    NSNumber * _limit;
    NSSet * _sources;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) NSNumber *confidence;
@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly) bool labelVisit;
@property (nonatomic, readonly) NSNumber *limit;
@property (nonatomic, readonly) NSSet *sources;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)ascending;
- (id)confidence;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAscending:(bool)arg1 confidence:(id)arg2 dateInterval:(id)arg3 labelVisit:(bool)arg4 limit:(id)arg5;
- (id)initWithAscending:(bool)arg1 confidence:(id)arg2 dateInterval:(id)arg3 labelVisit:(bool)arg4 limit:(id)arg5 sources:(id)arg6;
- (id)initWithAscending:(bool)arg1 confidence:(id)arg2 dateInterval:(id)arg3 limit:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFetchOptions:(id)arg1;
- (bool)labelVisit;
- (id)limit;
- (void)setDateInterval:(id)arg1;
- (id)sources;

@end
