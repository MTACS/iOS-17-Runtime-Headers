
@interface MTIDSpan : NSObject {
    NSDate * _endDate;
    NSDate * _referenceDate;
    unsigned long long  _serialNumber;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *referenceDate;
@property (nonatomic) unsigned long long serialNumber;
@property (nonatomic, retain) NSDate *startDate;

+ (id)localCalendar;
+ (id)spanForScheme:(id)arg1 date:(id)arg2 referenceDate:(id)arg3;

- (void).cxx_destruct;
- (id)endDate;
- (id)initWithScheme:(id)arg1 date:(id)arg2 referenceDate:(id)arg3;
- (id)referenceDate;
- (unsigned long long)serialNumber;
- (void)setEndDate:(id)arg1;
- (void)setReferenceDate:(id)arg1;
- (void)setSerialNumber:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
