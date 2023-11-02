
@interface HDNotificationEngineConfiguration : NSObject {
    NSCalendar * _calendar;
    NSDate * _endGenerationDate;
    NSDate * _startGenerationDate;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly, copy) NSDate *endGenerationDate;
@property (nonatomic, readonly, copy) NSDate *startGenerationDate;

- (void).cxx_destruct;
- (id)calendar;
- (id)endGenerationDate;
- (id)init;
- (id)initWithCalendar:(id)arg1 startGenerationDate:(id)arg2 endGenerationDate:(id)arg3;
- (id)startGenerationDate;

@end
