
@interface CEMApplicationControlDeclaration_InstallSchedule : CEMPayloadBase {
    NSNumber * _payloadDuration;
    NSString * _payloadEndTime;
    NSString * _payloadMode;
    NSString * _payloadStartTime;
}

@property (nonatomic, copy) NSNumber *payloadDuration;
@property (nonatomic, copy) NSString *payloadEndTime;
@property (nonatomic, copy) NSString *payloadMode;
@property (nonatomic, copy) NSString *payloadStartTime;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithMode:(id)arg1;
+ (id)buildWithMode:(id)arg1 withDuration:(id)arg2 withStartTime:(id)arg3 withEndTime:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDuration;
- (id)payloadEndTime;
- (id)payloadMode;
- (id)payloadStartTime;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDuration:(id)arg1;
- (void)setPayloadEndTime:(id)arg1;
- (void)setPayloadMode:(id)arg1;
- (void)setPayloadStartTime:(id)arg1;

@end
