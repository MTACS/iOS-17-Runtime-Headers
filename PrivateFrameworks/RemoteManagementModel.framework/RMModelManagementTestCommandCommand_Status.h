
@interface RMModelManagementTestCommandCommand_Status : RMModelPayloadBase {
    NSString * _statusEcho;
}

@property (nonatomic, copy) NSString *statusEcho;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithEcho:(id)arg1;
+ (id)buildWithEcho:(id)arg1;

- (void).cxx_destruct;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializeWithType:(short)arg1;
- (void)setStatusEcho:(id)arg1;
- (id)statusEcho;

@end
