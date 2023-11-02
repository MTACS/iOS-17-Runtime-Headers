
@interface MKTransitDepartureServiceGapFormatter : NSObject {
    NSDate * _departureCutoffDate;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSDate *departureCutoffDate;
@property (nonatomic, readonly) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)_descriptionForDepartureDate:(id)arg1 canIncludeDate:(bool)arg2 outDateFormat:(out unsigned long long*)arg3;
- (id)departureCutoffDate;
- (id)initWithTimeZone:(id)arg1 departureCutoffDate:(id)arg2;
- (id)lastDepartureAtStringFromDate:(id)arg1;
- (id)lastDepartureString;
- (id)lastDepartureUntilStringFromDate:(id)arg1;
- (id)timeZone;

@end
