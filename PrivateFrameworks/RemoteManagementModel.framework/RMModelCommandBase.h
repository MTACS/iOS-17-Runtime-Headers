
@interface RMModelCommandBase : RMModelPayloadBase {
    NSString * _commandIdentifier;
    RMModelAnyPayload * _commandPayload;
    NSString * _commandType;
}

@property (nonatomic, copy) NSString *commandIdentifier;
@property (nonatomic, copy) RMModelAnyPayload *commandPayload;
@property (nonatomic, copy) NSString *commandType;

+ (id)load:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)commandIdentifier;
- (id)commandPayload;
- (id)commandType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (bool)mustBeSupervised;
- (id)serializePayloadWithType:(short)arg1;
- (id)serializeWithType:(short)arg1;
- (void)setCommandIdentifier:(id)arg1;
- (void)setCommandPayload:(id)arg1;
- (void)setCommandType:(id)arg1;

@end
