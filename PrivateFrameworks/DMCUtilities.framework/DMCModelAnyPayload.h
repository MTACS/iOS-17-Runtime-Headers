
@interface DMCModelAnyPayload : DMCModelPayloadBase {
    NSDictionary * _dictKeys;
}

@property (nonatomic, copy) NSDictionary *dictKeys;

+ (id)buildFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictKeys;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializeWithType:(short)arg1;
- (void)setDictKeys:(id)arg1;

@end
