
@interface HMDEventRouterMessageFragmentationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _isCachedEventQueue;
    bool  _isFragmented;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) bool isCachedEventQueue;
@property (nonatomic, readonly) bool isFragmented;
@property (readonly) Class superclass;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithIsCachedEventQueue:(bool)arg1 isFragmented:(bool)arg2;
- (bool)isCachedEventQueue;
- (bool)isFragmented;

@end
