
@interface CEMPredicateCompositeBudget : CEMPredicateBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadCalendarIdentifier;
    CEMPredicateCompositeBudget_Monitors * _payloadMonitors;
    NSArray * _payloadNotificationTimes;
    NSArray * _payloadTimeBudget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadCalendarIdentifier;
@property (nonatomic, copy) CEMPredicateCompositeBudget_Monitors *payloadMonitors;
@property (nonatomic, copy) NSArray *payloadNotificationTimes;
@property (nonatomic, copy) NSArray *payloadTimeBudget;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithMonitors:(id)arg1 withTimeBudget:(id)arg2;
+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitors:(id)arg2 withNotificationTimes:(id)arg3 withTimeBudget:(id)arg4;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadCalendarIdentifier;
- (id)payloadMonitors;
- (id)payloadNotificationTimes;
- (id)payloadTimeBudget;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadCalendarIdentifier:(id)arg1;
- (void)setPayloadMonitors:(id)arg1;
- (void)setPayloadNotificationTimes:(id)arg1;
- (void)setPayloadTimeBudget:(id)arg1;

@end
