
@interface RMProtocolStatusReport_Errors : RMModelPayloadBase {
    NSArray * _reportReasons;
    NSString * _reportStatusItem;
}

@property (nonatomic, copy) NSArray *reportReasons;
@property (nonatomic, copy) NSString *reportStatusItem;

+ (id)allowedReportKeys;
+ (id)buildRequiredOnlyWithStatusItem:(id)arg1;
+ (id)buildWithStatusItem:(id)arg1 reasons:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)reportReasons;
- (id)reportStatusItem;
- (id)serializeWithType:(short)arg1;
- (void)setReportReasons:(id)arg1;
- (void)setReportStatusItem:(id)arg1;

@end
