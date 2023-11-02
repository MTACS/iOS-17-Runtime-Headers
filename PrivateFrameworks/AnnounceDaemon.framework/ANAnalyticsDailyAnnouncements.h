
@interface ANAnalyticsDailyAnnouncements : NSObject {
    NSMutableDictionary * _homes;
    double  _lastAccess;
}

@property (nonatomic, retain) NSMutableDictionary *homes;
@property (nonatomic) double lastAccess;

- (void).cxx_destruct;
- (unsigned long long)announcementsCount;
- (id)dictionary;
- (id)homes;
- (unsigned long long)homesCount;
- (void)incrementCountInHome:(id)arg1 group:(id)arg2;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLastAccess:(double)arg1;
- (double)lastAccess;
- (void)merge:(id)arg1;
- (void)setHomes:(id)arg1;
- (void)setLastAccess:(double)arg1;
- (bool)shouldReport;

@end
