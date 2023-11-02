
@interface SAExecuteOnRemoteRequest : SABaseClientBoundCommand

@property (nonatomic, retain) SARemoteDevice *remoteDevice;
@property (nonatomic) bool requiresResponseFromRemote;
@property (nonatomic, copy) NSData *serializedCommand;
@property (nonatomic) bool shouldFallbackOnAWDL;
@property (nonatomic) bool suppressResponse;
@property (nonatomic) bool useGuaranteedDelivery;

+ (id)executeOnRemoteRequest;
+ (id)executeOnRemoteRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (id)remoteDevice;
- (bool)requiresResponse;
- (bool)requiresResponseFromRemote;
- (id)serializedCommand;
- (void)setRemoteDevice:(id)arg1;
- (void)setRequiresResponseFromRemote:(bool)arg1;
- (void)setSerializedCommand:(id)arg1;
- (void)setShouldFallbackOnAWDL:(bool)arg1;
- (void)setSuppressResponse:(bool)arg1;
- (void)setUseGuaranteedDelivery:(bool)arg1;
- (bool)shouldFallbackOnAWDL;
- (bool)suppressResponse;
- (bool)useGuaranteedDelivery;

@end
