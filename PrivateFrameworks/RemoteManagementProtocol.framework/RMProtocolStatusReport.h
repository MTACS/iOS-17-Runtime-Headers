
@interface RMProtocolStatusReport : RMModelPayloadBase {
    NSArray * _reportErrors;
    NSNumber * _reportFullReport;
    RMModelAnyPayload * _reportStatusItems;
}

@property (nonatomic, copy) NSArray *reportErrors;
@property (nonatomic, copy) NSNumber *reportFullReport;
@property (nonatomic, copy) RMModelAnyPayload *reportStatusItems;

+ (id)requestWithStatusItems:(id)arg1 errors:(id)arg2 fullReport:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)reportErrors;
- (id)reportFullReport;
- (id)reportStatusItems;
- (id)serializeWithType:(short)arg1;
- (void)setReportErrors:(id)arg1;
- (void)setReportFullReport:(id)arg1;
- (void)setReportStatusItems:(id)arg1;

@end
