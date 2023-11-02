
@interface OBAnalyticsManager : NSObject {
    NSMutableArray * _events;
    bool  _shouldStashMetrics;
}

@property (nonatomic, retain) NSMutableArray *events;
@property bool shouldStashMetrics;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (void)addEvent:(id)arg1 withPayload:(id)arg2;
- (void)commit;
- (id)events;
- (id)init;
- (void)logPresentationOfPrivacyLinkWithIdentifier:(id)arg1;
- (void)logPresentationOfPrivacySplashWithIdentifier:(id)arg1;
- (void)logPresentationOfPrivacyUnifiedAbout;
- (void)logTapOnPrivacyLinkWithIdentifier:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setShouldStashMetrics:(bool)arg1;
- (bool)shouldStashMetrics;

@end
