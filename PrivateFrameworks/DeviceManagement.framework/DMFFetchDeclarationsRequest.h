
@interface DMFFetchDeclarationsRequest : DMFTaskRequest {
    bool  _includeInternalState;
    bool  _includePayloadContents;
    NSString * _organizationIdentifier;
    NSArray * _payloadIdentifiers;
}

@property (nonatomic) bool includeInternalState;
@property (nonatomic) bool includePayloadContents;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, copy) NSArray *payloadIdentifiers;

+ (Class)allowlistedClassForResultObject;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeInternalState;
- (bool)includePayloadContents;
- (id)initWithCoder:(id)arg1;
- (id)organizationIdentifier;
- (id)payloadIdentifiers;
- (void)setIncludeInternalState:(bool)arg1;
- (void)setIncludePayloadContents:(bool)arg1;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setPayloadIdentifiers:(id)arg1;

@end
