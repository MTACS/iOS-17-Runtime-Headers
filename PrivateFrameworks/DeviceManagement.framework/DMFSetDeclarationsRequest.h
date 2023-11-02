
@interface DMFSetDeclarationsRequest : DMFTaskRequest {
    NSArray * _declarations;
    NSString * _organizationIdentifier;
    NSString * _syncToken;
}

@property (nonatomic, copy) NSArray *declarations;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, copy) NSString *syncToken;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)declarations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)organizationIdentifier;
- (void)setDeclarations:(id)arg1;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setSyncToken:(id)arg1;
- (id)syncToken;

@end
