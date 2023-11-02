
@interface DMFUpdateDeclarationsRequest : DMFTaskRequest {
    NSString * _organizationIdentifier;
    NSArray * _removeDeclarations;
    NSString * _syncToken;
    NSArray * _upsertDeclarations;
}

@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, copy) NSArray *removeDeclarations;
@property (nonatomic, copy) NSString *syncToken;
@property (nonatomic, copy) NSArray *upsertDeclarations;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)organizationIdentifier;
- (id)removeDeclarations;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setRemoveDeclarations:(id)arg1;
- (void)setSyncToken:(id)arg1;
- (void)setUpsertDeclarations:(id)arg1;
- (id)syncToken;
- (id)upsertDeclarations;

@end
