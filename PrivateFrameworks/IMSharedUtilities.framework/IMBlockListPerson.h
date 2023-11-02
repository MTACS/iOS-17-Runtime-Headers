
@interface IMBlockListPerson : NSObject {
    NSString * _cachedCompanyName;
    NSString * _cachedFullName;
    CNContact * _cnPerson;
    NSString * _identifier;
}

@property (nonatomic, retain) NSString *cachedCompanyName;
@property (nonatomic, retain) NSString *cachedFullName;
@property (nonatomic, readonly) CNContact *cnPerson;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, retain) NSString *identifier;

+ (id)personWithCNContact:(id)arg1;

- (void).cxx_destruct;
- (id)cachedCompanyName;
- (id)cachedFullName;
- (id)cnPerson;
- (id)companyName;
- (id)fullName;
- (id)identifier;
- (id)init;
- (id)initWithCNContact:(id)arg1;
- (bool)isEqualToPerson:(id)arg1;
- (bool)isInAddressBook;
- (id)sanitizeString:(id)arg1;
- (void)setCachedCompanyName:(id)arg1;
- (void)setCachedFullName:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
