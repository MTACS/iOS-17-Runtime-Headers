
@interface RETimeline : NSObject <NSCopying> {
    NSArray * _transitionDates;
    NSArray * _values;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSArray *transitionDates;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStartDate:(id)arg1 values:(id)arg2 durations:(id)arg3;
- (id)initWithTimeline:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTimeline:(id)arg1;
- (id)startDate;
- (id)transitionDates;
- (id)valueForDate:(id)arg1;

@end
