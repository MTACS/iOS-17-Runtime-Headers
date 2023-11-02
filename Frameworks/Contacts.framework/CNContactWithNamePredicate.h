
@interface CNContactWithNamePredicate : CNPredicate <CNMAIDPredicate, CNSuggestedContactPredicate> {
    NSString * _name;
    unsigned long long  _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) Class superclass;

+ (id)descriptionForOptions:(unsigned long long)arg1;
+ (bool)doesPerson:(id)arg1 matchName:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactsFromCLSDataStore:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (unsigned long long)options;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(bool)arg2 service:(id)arg3 error:(id*)arg4;

@end
