
@interface CEMPredicateBudget : CEMPredicateBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadCalendarIdentifier;
    NSArray * _payloadIdentifiers;
    NSArray * _payloadIdentifiersVersion2;
    NSString * _payloadMonitor;
    NSArray * _payloadNotificationTimes;
    NSArray * _payloadTimeBudget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadCalendarIdentifier;
@property (nonatomic, copy) NSArray *payloadIdentifiers;
@property (nonatomic, copy) NSArray *payloadIdentifiersVersion2;
@property (nonatomic, copy) NSString *payloadMonitor;
@property (nonatomic, copy) NSArray *payloadNotificationTimes;
@property (nonatomic, copy) NSArray *payloadTimeBudget;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithMonitor:(id)arg1 withTimeBudget:(id)arg2;
+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withIdentifiersVersion2:(id)arg4 withNotificationTimes:(id)arg5 withTimeBudget:(id)arg6;
+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withNotificationTimes:(id)arg4 withTimeBudget:(id)arg5;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadCalendarIdentifier;
- (id)payloadIdentifiers;
- (id)payloadIdentifiersVersion2;
- (id)payloadMonitor;
- (id)payloadNotificationTimes;
- (id)payloadTimeBudget;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadCalendarIdentifier:(id)arg1;
- (void)setPayloadIdentifiers:(id)arg1;
- (void)setPayloadIdentifiersVersion2:(id)arg1;
- (void)setPayloadMonitor:(id)arg1;
- (void)setPayloadNotificationTimes:(id)arg1;
- (void)setPayloadTimeBudget:(id)arg1;

@end
