
@interface DMTConfigurationProfile : DMTConfigurationPrimitive <DMTConfigurationProfilePayload> {
    NSArray * _payloads;
    NSDictionary * _payloadsByType;
    NSDictionary * _payloadsByUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *payloads;
@property (nonatomic, readonly) NSDictionary *payloadsByType;
@property (nonatomic, readonly) NSDictionary *payloadsByUUID;
@property (nonatomic, readonly) NSDictionary *rawDictionary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *uuid;

+ (id)configurationProfileWithData:(id)arg1 error:(id*)arg2;
+ (id)configurationProfileWithDictionary:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)payloads;
- (id)payloadsByType;
- (id)payloadsByUUID;
- (id)payloadsOfType:(id)arg1;
- (id)payloadsOfTypes:(id)arg1;
- (bool)validateWithValidators:(id)arg1 error:(id*)arg2;

@end
