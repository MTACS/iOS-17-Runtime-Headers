
@interface HDMCSymptomHistoryBuilder : NSObject {
    NSMutableDictionary * _mostRecentDayBySymptom;
    unsigned long long  _recentSymptoms;
}

@property (nonatomic) unsigned long long recentSymptoms;

- (void).cxx_destruct;
- (void)addSymptoms:(unsigned long long)arg1 forDayIndex:(long long)arg2;
- (id)initWithCurrentDayIndex:(long long)arg1;
- (unsigned long long)recentSymptoms;
- (void)setRecentSymptoms:(unsigned long long)arg1;

@end
