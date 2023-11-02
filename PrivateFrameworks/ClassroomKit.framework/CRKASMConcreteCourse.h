
@interface CRKASMConcreteCourse : NSObject <CRKASMCourse> {
    NSString * _backingClassObjectID;
    CRKASMCertificateVendor * _certificateVendor;
    unsigned long long  _color;
    NSDate * _creationDate;
    bool  _editable;
    DMFControlGroupIdentifier * _identifier;
    CRKASMIdentityVendor * _identityVendor;
    <CRKASMLocation> * _location;
    unsigned long long  _mascot;
    NSString * _name;
    NSSet * _trustedUserIdentifiers;
    NSArray * _trustedUsers;
    NSArray * _users;
}

@property (nonatomic, readonly, copy) NSSet *allTrustedUserCertificates;
@property (nonatomic, readonly, copy) NSString *backingClassObjectID;
@property (nonatomic, readonly) CRKASMCertificateVendor *certificateVendor;
@property (nonatomic, readonly) unsigned long long color;
@property (nonatomic, readonly) NSDate *creationDate;
@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (nonatomic, readonly, copy) DMFControlGroupIdentifier *identifier;
@property (nonatomic, readonly) <CRKIdentity> *identity;
@property (nonatomic, readonly) CRKASMIdentityVendor *identityVendor;
@property (nonatomic, readonly) <CRKASMLocation> *location;
@property (nonatomic, readonly) unsigned long long mascot;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSSet *trustedUserIdentifiers;
@property (nonatomic, readonly, copy) NSArray *trustedUsers;
@property (nonatomic, readonly, copy) NSArray *users;

+ (id)courseNameForClass:(id)arg1;
+ (id)trustedUserIdentifierForTrustedUsers:(id)arg1;
+ (id)trustedUsersFromPersons:(id)arg1 environment:(id)arg2;
+ (id)usersFromPersons:(id)arg1 environment:(id)arg2;

- (void).cxx_destruct;
- (id)allTrustedUserCertificates;
- (id)backingClassObjectID;
- (id)certificateVendor;
- (unsigned long long)color;
- (id)creationDate;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)identity;
- (id)identityVendor;
- (id)initWithBackingClass:(id)arg1 location:(id)arg2 persons:(id)arg3 trustedPersons:(id)arg4 identityVendor:(id)arg5 manageableLocationIDs:(id)arg6 environment:(id)arg7;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (id)location;
- (unsigned long long)mascot;
- (id)name;
- (id)trustedUserIdentifiers;
- (id)trustedUsers;
- (id)users;

@end
