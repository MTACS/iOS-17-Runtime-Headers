
@interface RMModelAssetBaseReference : RMModelPayloadBase {
    NSString * _payloadContentType;
    NSString * _payloadDataURL;
    NSString * _payloadHashSHA256;
    NSNumber * _payloadSize;
}

@property (nonatomic, copy) NSString *payloadContentType;
@property (nonatomic, copy) NSString *payloadDataURL;
@property (nonatomic, copy) NSString *payloadHashSHA256;
@property (nonatomic, copy) NSNumber *payloadSize;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithDataURL:(id)arg1;
+ (id)buildWithDataURL:(id)arg1 contentType:(id)arg2 size:(id)arg3 hashSHA256:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadContentType;
- (id)payloadDataURL;
- (id)payloadHashSHA256;
- (id)payloadSize;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadContentType:(id)arg1;
- (void)setPayloadDataURL:(id)arg1;
- (void)setPayloadHashSHA256:(id)arg1;
- (void)setPayloadSize:(id)arg1;

@end
