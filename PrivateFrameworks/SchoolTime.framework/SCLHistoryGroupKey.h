
@interface SCLHistoryGroupKey : NSObject {
    NSCalendar * _calendar;
    NSDate * _referenceDate;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSDate *referenceDate;

- (void).cxx_destruct;
- (id)calendar;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCalendar:(id)arg1 referenceDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)referenceDate;

@end
