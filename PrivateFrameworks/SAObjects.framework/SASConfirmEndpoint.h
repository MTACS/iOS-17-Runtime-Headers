
@interface SASConfirmEndpoint : SABaseClientBoundCommand

@property (nonatomic, copy) NSNumber *endpointConfirmationTimestamp;

+ (id)confirmEndpoint;
+ (id)confirmEndpointWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)endpointConfirmationTimestamp;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setEndpointConfirmationTimestamp:(id)arg1;

@end
