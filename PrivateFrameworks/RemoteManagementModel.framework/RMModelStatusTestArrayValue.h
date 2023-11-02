
@interface RMModelStatusTestArrayValue : RMModelStatusBase {
    NSString * _statusKey1;
    NSString * _statusKey2;
}

@property (nonatomic, copy) NSString *statusKey1;
@property (nonatomic, copy) NSString *statusKey2;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithKey1:(id)arg1;
+ (id)buildWithKey1:(id)arg1 key2:(id)arg2;
+ (bool)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (void)setStatusKey1:(id)arg1;
- (void)setStatusKey2:(id)arg1;
- (id)statusKey1;
- (id)statusKey2;

@end
