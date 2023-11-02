
@interface RMModelStatusSoftwareUpdatePendingVersion : RMModelStatusBase {
    NSString * _statusBuildVersion;
    NSString * _statusOsVersion;
}

@property (nonatomic, copy) NSString *statusBuildVersion;
@property (nonatomic, copy) NSString *statusOsVersion;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithOsVersion:(id)arg1 buildVersion:(id)arg2;
+ (id)buildWithOsVersion:(id)arg1 buildVersion:(id)arg2;
+ (bool)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (void)setStatusBuildVersion:(id)arg1;
- (void)setStatusOsVersion:(id)arg1;
- (id)statusBuildVersion;
- (id)statusOsVersion;

@end
