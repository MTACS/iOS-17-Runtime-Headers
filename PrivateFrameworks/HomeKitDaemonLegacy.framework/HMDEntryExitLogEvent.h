
@interface HMDEntryExitLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _isEntry;
    bool  _isExit;
    bool  _isFalse;
    double  _secondsLastFired;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool isEntry;
@property (readonly) bool isExit;
@property (readonly) bool isFalse;
@property (readonly) double secondsLastFired;
@property (readonly) Class superclass;

+ (id)entryLogEvent:(double)arg1 isFalse:(bool)arg2;
+ (id)exitLogEvent:(double)arg1 isFalse:(bool)arg2;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithReason:(unsigned long long)arg1 isFalse:(bool)arg2 lastFired:(double)arg3;
- (bool)isEntry;
- (bool)isExit;
- (bool)isFalse;
- (double)secondsLastFired;

@end
