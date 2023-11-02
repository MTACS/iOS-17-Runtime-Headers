
@interface HMDMediaDestinationControllerFailureLogEvent : HMDMediaDestinationControllerLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _destinationControllerErrorCode;
    NSString * _errorCode;
    NSString * _errorDomain;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *destinationControllerErrorCode;
@property (readonly, copy) NSString *errorCode;
@property (readonly, copy) NSString *errorDomain;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)destinationControllerErrorCode;
- (id)errorCode;
- (id)errorDomain;
- (id)initWithDestinationControllerErrorCode:(id)arg1 errorCode:(id)arg2 errorDomain:(id)arg3 isTriggeredOnControllerDevice:(id)arg4 userPrivilege:(id)arg5;

@end
