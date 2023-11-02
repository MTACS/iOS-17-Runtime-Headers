
@interface HMDProcessExitInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _exitReason;
    NSString * _exitType;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *exitReason;
@property (nonatomic, readonly, copy) NSString *exitType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)exitReason;
- (id)exitType;
- (id)initWithExitType:(id)arg1 reason:(id)arg2;

@end
