
@interface HMDMediaDestinationControllerTransactionUpdatedDestinationLogEvent : HMDMediaDestinationControllerDestinationLogEvent <HMMCoreAnalyticsLogging>

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithExistingDestinationType:(id)arg1 destinationType:(id)arg2 isTriggeredOnControllerDevice:(id)arg3 userPrivilege:(id)arg4;

@end
