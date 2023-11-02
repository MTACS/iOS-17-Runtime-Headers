
@interface RMModelStatusSoftwareUpdateFailureReason : RMModelStatusBase {
    NSNumber * _statusCount;
    NSString * _statusReason;
    NSString * _statusTimestamp;
}

@property (nonatomic, copy) NSNumber *statusCount;
@property (nonatomic, copy) NSString *statusReason;
@property (nonatomic, copy) NSString *statusTimestamp;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithCount:(id)arg1;
+ (id)buildWithCount:(id)arg1 reason:(id)arg2 timestamp:(id)arg3;
+ (bool)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (void)setStatusCount:(id)arg1;
- (void)setStatusReason:(id)arg1;
- (void)setStatusTimestamp:(id)arg1;
- (id)statusCount;
- (id)statusReason;
- (id)statusTimestamp;

@end
