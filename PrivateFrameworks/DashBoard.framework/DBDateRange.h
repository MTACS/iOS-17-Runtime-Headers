
@interface DBDateRange : NSObject {
    NSDate * _end;
    NSDate * _start;
}

@property (nonatomic, retain) NSDate *end;
@property (nonatomic, readonly) double endTimeIntervalSinceReferenceDate;
@property (nonatomic, readonly) bool hasEnd;
@property (nonatomic, readonly) bool hasStart;
@property (nonatomic, retain) NSDate *start;
@property (nonatomic, readonly) double startTimeIntervalSinceReferenceDate;
@property (nonatomic, readonly) bool validRange;

+ (bool)_validDate:(id)arg1;

- (void).cxx_destruct;
- (bool)containsDate:(id)arg1;
- (id)description;
- (id)end;
- (double)endTimeIntervalSinceReferenceDate;
- (bool)hasEnd;
- (bool)hasStart;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;
- (double)startTimeIntervalSinceReferenceDate;
- (bool)validRange;

@end
