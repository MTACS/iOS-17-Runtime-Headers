
@interface TPSAnalyticsEventAppLaunched : TPSAnalyticsEvent {
    NSString * _collectionID;
    NSString * _contentID;
    NSString * _correlationID;
    NSNumber * _launchNumber;
    NSString * _launchType;
    bool  _needsSessionReset;
    NSString * _userType;
}

@property (nonatomic, retain) NSString *collectionID;
@property (nonatomic, retain) NSString *contentID;
@property (nonatomic, retain) NSString *correlationID;
@property (nonatomic, readonly) NSNumber *launchNumber;
@property (nonatomic, retain) NSString *launchType;
@property (nonatomic, readonly) NSString *userType;

+ (id)_currentSessionEvents;
+ (id)_initialSessionEvent;
+ (id)_latestSessionEvent;
+ (void)appSessionEndedWithType:(id)arg1;
+ (id)eventWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 launchType:(id)arg4;
+ (id)firstLaunchEvent;
+ (id)lastRecordedLaunchType;
+ (void)resetLaunchNumber;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_aggregateLog;
- (id)_initFirstLaunchEvent;
- (id)_initWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 launchType:(id)arg4;
- (void)_updateLaunchCount;
- (id)collectionID;
- (id)contentID;
- (id)correlationID;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)launchNumber;
- (id)launchType;
- (void)log;
- (id)mutableAnalyticsEventRepresentation;
- (void)persistKeys;
- (void)setCollectionID:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setCorrelationID:(id)arg1;
- (void)setLaunchType:(id)arg1;
- (id)userType;
- (id)userTypeString;

@end
