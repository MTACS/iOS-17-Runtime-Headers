
@interface CLSOrganization : CLSObject <CLSContactsSearchable> {
    NSArray * _emailDomains;
    NSArray * _locationIDs;
    NSString * _name;
    NSString * _searchText;
    long long  _type;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, copy) NSArray *emailDomains;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, copy) NSArray *locationIDs;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic) long long type;

+ (id)_propertyNames;
+ (id)stringForType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (long long)typeFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)emailDomains;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrganizationID:(id)arg1 type:(long long)arg2 name:(id)arg3;
- (id)locationIDs;
- (void)mergeWithObject:(id)arg1;
- (id)name;
- (id)searchText;
- (void)setEmailDomains:(id)arg1;
- (void)setLocationIDs:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
