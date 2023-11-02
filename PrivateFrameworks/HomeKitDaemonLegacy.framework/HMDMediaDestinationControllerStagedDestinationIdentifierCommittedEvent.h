
@interface HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent : HMDMediaDestinationControllerLogEvent <HMMCoreAnalyticsLogging> {
    NSUUID * _stagedDestinationIdentifier;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly, copy) NSUUID *stagedDestinationIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithStagedDestinationIdentifier:(id)arg1 isTriggeredOnControllerDevice:(id)arg2 userPrivilege:(id)arg3;
- (id)stagedDestinationIdentifier;

@end
