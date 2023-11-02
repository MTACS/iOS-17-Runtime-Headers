
@interface PSIDateFilter : NSObject <NSCopying> {
    NSString * _displayString;
    PSIDate * _endDate;
    PSIDate * _singleDate;
    PSIDate * _startDate;
}

@property (nonatomic, copy) NSString *displayString;
@property (readonly) PSIDate *endDate;
@property (readonly) long long int64RepresentationMask;
@property (readonly) PSIDate *singleDate;
@property (readonly) PSIDate *startDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayString;
- (id)endDate;
- (id)initWithEndDateComponents:(id)arg1;
- (id)initWithSingleDate:(id)arg1;
- (id)initWithSingleDateComponents:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithStartDateComponents:(id)arg1;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
- (long long)int64RepresentationMask;
- (void)setDisplayString:(id)arg1;
- (id)singleDate;
- (id)startDate;

@end
