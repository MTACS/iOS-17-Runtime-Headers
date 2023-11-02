
@interface TBJoinAnalyticsEvent : NSObject <TBAnalyticsEvent> {
    unsigned long long  _action;
    NSString * _bssid;
    NSNumber * _latitude;
    NSNumber * _longitude;
    NSNumber * _score;
    unsigned long long  _source;
    unsigned long long  _type;
    NSNumber * _visibleDuration;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic, copy) NSString *bssid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *eventDictionary;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSNumber *score;
@property (nonatomic) unsigned long long source;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;
@property (nonatomic) NSNumber *visibleDuration;

+ (id)joinAlertEventWithSource:(unsigned long long)arg1 action:(unsigned long long)arg2 visibleDuration:(id)arg3;
+ (id)joinRecommendationEventWithSource:(unsigned long long)arg1 action:(unsigned long long)arg2 BSSID:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 score:(id)arg6 visibleDuration:(id)arg7;

- (void).cxx_destruct;
- (unsigned long long)action;
- (id)bssid;
- (id)eventDictionary;
- (id)eventName;
- (id)latitude;
- (id)longitude;
- (id)score;
- (void)setAction:(unsigned long long)arg1;
- (void)setBssid:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setScore:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setVisibleDuration:(id)arg1;
- (unsigned long long)source;
- (unsigned long long)type;
- (id)visibleDuration;

@end
