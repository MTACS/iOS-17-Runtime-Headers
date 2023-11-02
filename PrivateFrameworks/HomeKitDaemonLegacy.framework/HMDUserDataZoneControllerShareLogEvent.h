
@interface HMDUserDataZoneControllerShareLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _didAccept;
    unsigned long long  _result;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool didAccept;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) unsigned long long result;
@property (readonly) Class superclass;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (bool)didAccept;
- (id)initWithResult:(unsigned long long)arg1 didAccept:(bool)arg2;
- (unsigned long long)result;

@end
