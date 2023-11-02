
@interface CNEmailAddressContactPredicate : CNPredicate <CNMAIDPredicate, CNSuggestedContactPredicate> {
    NSArray * _emailAddresses;
    NSArray * _groupIdentifiers;
    bool  _returnsMultipleResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *emailAddresses;
@property (nonatomic, readonly, copy) NSArray *groupIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool returnsMultipleResults;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)cn_hasHighSpecificity;
- (id)contactsFromCLSDataStore:(id)arg1;
- (id)description;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifiers;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 groupIdentifiers:(id)arg2 returnMultipleResults:(bool)arg3;
- (id)initWithEmailAddress:(id)arg1 returnMultipleResults:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)returnsMultipleResults;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(bool)arg2 service:(id)arg3 error:(id*)arg4;
- (id)shortDebugDescription;

@end
