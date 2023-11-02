
@interface BRAccountDescriptor : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    NSString * _domainIdentifier;
    bool  _isDataSeparated;
    bool  _isLoggedInToCloudDocs;
    NSString * _organizationName;
    NSString * _personaIdentifier;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic, readonly) bool isDataSeparated;
@property (nonatomic, readonly) bool isLoggedInToCloudDocs;
@property (nonatomic, readonly) NSString *organizationName;

+ (id)accountDescriptorForAccountID:(id)arg1;
+ (id)accountDescriptorForAccountID:(id)arg1 mustBeLoggedIn:(bool)arg2;
+ (id)accountDescriptorForPersonaID:(id)arg1;
+ (id)accountDescriptorForPersonaID:(id)arg1 mustBeLoggedIn:(bool)arg2;
+ (id)accountDescriptorForURL:(id)arg1;
+ (id)accountDescriptorForURL:(id)arg1 mustBeLoggedIn:(bool)arg2;
+ (id)allEligibleAccountDescriptors;
+ (id)allLoggedInAccountDescriptors;
+ (void)clearAccountDescriptorCache;
+ (id)matchDomainWithAccountAndStampDomainIfNeeded:(id)arg1 withAccounts:(id)arg2 persistDomain:(bool*)arg3;
+ (bool)mightHaveDataSeparatedAccountDescriptor;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)description;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonaIdentifier:(id)arg1 accountIdentifier:(id)arg2 domainIdentifier:(id)arg3 organizationName:(id)arg4 dataSeparated:(bool)arg5 loggedInToCloudDocs:(bool)arg6;
- (bool)isDataSeparated;
- (bool)isLoggedInToCloudDocs;
- (id)organizationName;
- (id)personaIdentifier;

@end
