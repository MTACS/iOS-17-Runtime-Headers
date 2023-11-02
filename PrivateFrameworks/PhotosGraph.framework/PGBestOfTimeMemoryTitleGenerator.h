
@interface PGBestOfTimeMemoryTitleGenerator : PGTitleGenerator {
    NSDate * _endDate;
    NSDate * _startDate;
    long long  _year;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long year;

- (void).cxx_destruct;
- (id)_bestOfPastTimeTitle;
- (id)_bestOfYearTitle;
- (id)_generateSubtitle;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 titleGenerationContext:(id)arg3;
- (id)initWithYear:(long long)arg1 titleGenerationContext:(id)arg2;
- (id)startDate;
- (long long)year;

@end
