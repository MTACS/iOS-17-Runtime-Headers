
@interface GEOTrafficAndETAResult : NSObject {
    double  _aggressiveTravelTime;
    double  _conservativeTravelTime;
    bool  _isSuccess;
    NSString * _longTrafficString;
    double  _seconds;
    NSString * _shortTrafficString;
    NSString * _spokenRouteName;
    NSString * _writtenRouteName;
}

@property (nonatomic) double aggressiveTravelTime;
@property (nonatomic) double conservativeTravelTime;
@property (nonatomic) bool isSuccess;
@property (nonatomic, copy) NSString *longTrafficString;
@property (nonatomic) double seconds;
@property (nonatomic, copy) NSString *shortTrafficString;
@property (nonatomic, copy) NSString *spokenRouteName;
@property (nonatomic, copy) NSString *writtenRouteName;

- (void).cxx_destruct;
- (double)aggressiveTravelTime;
- (double)conservativeTravelTime;
- (bool)isSuccess;
- (id)longTrafficString;
- (double)seconds;
- (void)setAggressiveTravelTime:(double)arg1;
- (void)setConservativeTravelTime:(double)arg1;
- (void)setIsSuccess:(bool)arg1;
- (void)setLongTrafficString:(id)arg1;
- (void)setSeconds:(double)arg1;
- (void)setShortTrafficString:(id)arg1;
- (void)setSpokenRouteName:(id)arg1;
- (void)setWrittenRouteName:(id)arg1;
- (id)shortTrafficString;
- (id)spokenRouteName;
- (id)writtenRouteName;

@end
