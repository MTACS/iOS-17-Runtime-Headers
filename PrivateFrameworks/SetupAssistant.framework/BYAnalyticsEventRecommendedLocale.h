
@interface BYAnalyticsEventRecommendedLocale : NSObject {
    double  _durationOfWiFiScan;
    unsigned long long  _source;
    bool  _userSawRecommendedLocale;
    bool  _userVisitedLocalePane;
}

@property (nonatomic) double durationOfWiFiScan;
@property (nonatomic) unsigned long long source;
@property (nonatomic) bool userSawRecommendedLocale;
@property (nonatomic) bool userVisitedLocalePane;

- (double)durationOfWiFiScan;
- (id)eventPayload;
- (id)initWithAnalyticsManager:(id)arg1;
- (void)setDurationOfWiFiScan:(double)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setUserSawRecommendedLocale:(bool)arg1;
- (void)setUserVisitedLocalePane:(bool)arg1;
- (unsigned long long)source;
- (bool)userSawRecommendedLocale;
- (bool)userVisitedLocalePane;

@end
