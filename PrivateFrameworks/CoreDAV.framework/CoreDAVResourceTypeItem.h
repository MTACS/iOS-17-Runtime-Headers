
@interface CoreDAVResourceTypeItem : CoreDAVItem {
    CoreDAVItemWithNoChildren * _addressBook;
    CoreDAVItemWithNoChildren * _collection;
    CoreDAVItemWithNoChildren * _principal;
    CoreDAVItemWithNoChildren * _searchAddressBook;
    CoreDAVItemWithNoChildren * _shared;
    CoreDAVItemWithNoChildren * _unauthenticated;
}

@property (nonatomic, retain) CoreDAVItemWithNoChildren *addressBook;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *collection;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *principal;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *searchAddressBook;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *shared;
@property (nonatomic, readonly) NSSet *stringSet;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)addressBook;
- (id)collection;
- (id)description;
- (id)init;
- (bool)isTypeWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)principal;
- (id)searchAddressBook;
- (void)setAddressBook:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)setPrincipal:(id)arg1;
- (void)setSearchAddressBook:(id)arg1;
- (void)setShared:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (id)shared;
- (id)stringSet;
- (id)unauthenticated;
- (void)write:(id)arg1;

@end
