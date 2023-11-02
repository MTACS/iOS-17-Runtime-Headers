
@interface RMModelStatusServicesBackgroundTask_Launchd : RMModelPayloadBase {
    NSString * _statusChecksum;
    NSString * _statusLabel;
    NSString * _statusProgram;
    NSArray * _statusProgramArguments;
}

@property (nonatomic, copy) NSString *statusChecksum;
@property (nonatomic, copy) NSString *statusLabel;
@property (nonatomic, copy) NSString *statusProgram;
@property (nonatomic, copy) NSArray *statusProgramArguments;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithLabel:(id)arg1 program:(id)arg2 checksum:(id)arg3;
+ (id)buildWithLabel:(id)arg1 program:(id)arg2 programArguments:(id)arg3 checksum:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializeWithType:(short)arg1;
- (void)setStatusChecksum:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setStatusProgram:(id)arg1;
- (void)setStatusProgramArguments:(id)arg1;
- (id)statusChecksum;
- (id)statusLabel;
- (id)statusProgram;
- (id)statusProgramArguments;

@end
