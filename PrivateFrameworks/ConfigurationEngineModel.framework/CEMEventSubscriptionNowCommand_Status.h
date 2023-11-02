
@interface CEMEventSubscriptionNowCommand_Status : CEMPayloadBase {
    NSArray * _statusInactiveEvents;
    NSArray * _statusUnknownEvents;
}

@property (nonatomic, copy) NSArray *statusInactiveEvents;
@property (nonatomic, copy) NSArray *statusUnknownEvents;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithInactiveEvents:(id)arg1 withUnknownEvents:(id)arg2;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusInactiveEvents:(id)arg1;
- (void)setStatusUnknownEvents:(id)arg1;
- (id)statusInactiveEvents;
- (id)statusUnknownEvents;

@end
