
@interface FCTimesOfDayConfiguration : NSObject {
    FCTimeOfDayConfiguration * _afternoonTimeOfDayConfiguration;
    FCTimeOfDayConfiguration * _eveningTimeOfDayConfiguration;
    FCTimeOfDayConfiguration * _morningTimeOfDayConfiguration;
    FCTimeOfDayConfiguration * _nightTimeOfDayConfiguration;
}

@property (nonatomic, readonly) FCTimeOfDayConfiguration *afternoonTimeOfDayConfiguration;
@property (nonatomic, readonly) FCTimeOfDayConfiguration *eveningTimeOfDayConfiguration;
@property (nonatomic, readonly) FCTimeOfDayConfiguration *morningTimeOfDayConfiguration;
@property (nonatomic, readonly) FCTimeOfDayConfiguration *nightTimeOfDayConfiguration;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)afternoonTimeOfDayConfiguration;
- (id)eveningTimeOfDayConfiguration;
- (id)initWithDictionary:(id)arg1;
- (id)morningTimeOfDayConfiguration;
- (id)nightTimeOfDayConfiguration;

@end
