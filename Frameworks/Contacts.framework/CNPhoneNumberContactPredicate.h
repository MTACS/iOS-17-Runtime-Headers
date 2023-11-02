
@interface CNPhoneNumberContactPredicate : CNPredicate <CNSuggestedContactPredicate> {
    NSString * _countryCode;
    NSString * _digits;
    NSArray * _groupIdentifiers;
    CNPhoneNumber * _phoneNumber;
    NSString * _prefixHint;
    bool  _returnsMultipleResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)cn_hasHighSpecificity;
- (void)cn_triageWithLog:(id)arg1 serialNumber:(unsigned long long)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(bool)arg2 service:(id)arg3 error:(id*)arg4;
- (id)shortDebugDescription;

@end
