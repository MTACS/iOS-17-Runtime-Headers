
@interface HKDefaultSleepDataSourceProvider : NSObject <HKSleepDataSourceProvider> {
    NSCalendar * _calendar;
    NSString * _queryIdentifier;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSString *queryIdentifier;

- (void).cxx_destruct;
- (id)calendar;
- (id)initWithCalendar:(id)arg1 queryIdentifier:(id)arg2;
- (id)makeSleepDataSourceFromHealthStore:(id)arg1 representativeDisplayType:(id)arg2;
- (id)makeSleepStagesDataSourceFromHealthStore:(id)arg1 representativeDisplayType:(id)arg2;
- (id)queryIdentifier;

@end
