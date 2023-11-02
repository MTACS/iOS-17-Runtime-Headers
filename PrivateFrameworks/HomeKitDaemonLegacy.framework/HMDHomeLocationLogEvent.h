
@interface HMDHomeLocationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    double  _homeLocationDistance;
    int  _isGreatDistance;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double homeLocationDistance;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) int isGreatDistance;
@property (readonly) Class superclass;

+ (id)updateWithHomeDistance:(double)arg1;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (double)homeLocationDistance;
- (id)initWithDistance:(double)arg1;
- (int)isGreatDistance;

@end
