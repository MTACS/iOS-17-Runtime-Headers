
@interface RMModelAppManagedDeclaration_RemoveBehavior : RMModelPayloadBase {
    NSNumber * _payloadRemovable;
}

@property (nonatomic, copy) NSNumber *payloadRemovable;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRemovable:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadRemovable;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadRemovable:(id)arg1;

@end
