
@interface RMProtocolStatusReport_StatusReason : RMModelPayloadBase {
    NSString * _reportCode;
    NSString * _reportDescription;
    RMModelAnyPayload * _reportDetails;
}

@property (nonatomic, copy) NSString *reportCode;
@property (nonatomic, copy) NSString *reportDescription;
@property (nonatomic, copy) RMModelAnyPayload *reportDetails;

+ (id)allowedReportKeys;
+ (id)buildRequiredOnlyWithCode:(id)arg1;
+ (id)buildWithCode:(id)arg1 description:(id)arg2 details:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)reportCode;
- (id)reportDescription;
- (id)reportDetails;
- (id)serializeWithType:(short)arg1;
- (void)setReportCode:(id)arg1;
- (void)setReportDescription:(id)arg1;
- (void)setReportDetails:(id)arg1;

@end
