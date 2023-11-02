
@interface CLSInputTimeClue : CLSInputClue {
    NSArray * _dateComponentsArray;
    NSArray * _events;
    NSSet * _localDates;
    NSDate * _localEndDate;
    NSDate * _localStartDate;
    NSSet * _universalDates;
    NSDate * _universalEndDate;
    NSDate * _universalStartDate;
}

@property (nonatomic, copy) NSArray *events;

+ (id)clueWithDates:(id)arg1;

- (void).cxx_destruct;
- (void)_computeDateProperties;
- (void)_prepareWithProgressBlock:(id /* block */)arg1;
- (id)description;
- (id)events;
- (bool)isEqualToClue:(id)arg1;
- (id)localDates;
- (id)localEndDate;
- (id)localStartDate;
- (unsigned long long)numberOfDays;
- (void)setEvents:(id)arg1;
- (double)timeInterval;
- (id)universalDates;
- (id)universalEndDate;
- (id)universalStartDate;

@end
