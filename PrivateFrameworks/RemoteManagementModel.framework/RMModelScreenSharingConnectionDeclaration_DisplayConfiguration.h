
@interface RMModelScreenSharingConnectionDeclaration_DisplayConfiguration : RMModelPayloadBase {
    NSString * _payloadDisplayType;
}

@property (nonatomic, copy) NSString *payloadDisplayType;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithDisplayType:(id)arg1;
+ (id)buildWithDisplayType:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadDisplayType;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadDisplayType:(id)arg1;

@end
