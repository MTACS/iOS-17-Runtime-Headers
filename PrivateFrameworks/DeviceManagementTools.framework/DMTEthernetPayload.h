
@interface DMTEthernetPayload : DMTConfigurationPayloadBase <DMTConfigurationPayload>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *rawDictionary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *uuid;

+ (id)supportedPayloadTypes;

@end
