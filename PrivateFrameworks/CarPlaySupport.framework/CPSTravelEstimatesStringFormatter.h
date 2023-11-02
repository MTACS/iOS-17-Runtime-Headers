
@interface CPSTravelEstimatesStringFormatter : NSObject {
    NSDateFormatter * _arrivalTimeFormatter;
    NSCalendar * _calendar;
    NSDateComponentsFormatter * _remainingTimeFormatter;
}

@property (nonatomic, readonly) NSDateFormatter *arrivalTimeFormatter;
@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, readonly) NSDateComponentsFormatter *remainingTimeFormatter;

- (void).cxx_destruct;
- (double)_minuteRoundedTimeRemainingForTravelEstimates:(id)arg1;
- (id)arrivalTimeFormatter;
- (id)calendar;
- (id)generateTravelEstimatesStringsForTravelEstimates:(id)arg1;
- (id)init;
- (id)remainingTimeFormatter;
- (void)setCalendar:(id)arg1;

@end
