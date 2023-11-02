
@interface RMModelStatusBase : RMModelPayloadBase

+ (bool)isArrayValue;
+ (id)statusItemType;

- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (id)serializeWithType:(short)arg1;

@end
