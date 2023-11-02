
@interface GDEntityResolutionCollectionCandidate : NSObject <NSSecureCoding> {
    NSString * _aliasConcat;
    long long  _callSixMonths;
    long long  _callSixWeeks;
    long long  _callTwelveWeeks;
    long long  _callTwoWeeks;
    NSString * _entityAliasConcat;
    long long  _firstPartyMsgSixMonths;
    long long  _firstPartyMsgSixWeeks;
    long long  _firstPartyMsgThreeMonths;
    long long  _firstPartyMsgTwoWeeks;
    NSString * _identifier;
    NSString * _personFromEvent;
    NSString * _personFromEventLocation;
    NSString * _personFromLocation;
    NSString * _personFromOrganization;
    NSString * _personToPerson;
    NSString * _primaryName;
    long long  _thirdPartyMsgSixMonths;
    long long  _thirdPartyMsgSixWeeks;
    long long  _thirdPartyMsgThreeMonths;
    long long  _thirdPartyMsgTwoWeeks;
}

@property (nonatomic, readonly, copy) NSString *aliasConcat;
@property (nonatomic, readonly) long long callSixMonths;
@property (nonatomic, readonly) long long callSixWeeks;
@property (nonatomic, readonly) long long callTwelveWeeks;
@property (nonatomic, readonly) long long callTwoWeeks;
@property (nonatomic, readonly, copy) NSString *entityAliasConcat;
@property (nonatomic, readonly) long long firstPartyMsgSixMonths;
@property (nonatomic, readonly) long long firstPartyMsgSixWeeks;
@property (nonatomic, readonly) long long firstPartyMsgThreeMonths;
@property (nonatomic, readonly) long long firstPartyMsgTwoWeeks;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *personFromEvent;
@property (nonatomic, readonly, copy) NSString *personFromEventLocation;
@property (nonatomic, readonly, copy) NSString *personFromLocation;
@property (nonatomic, readonly, copy) NSString *personFromOrganization;
@property (nonatomic, readonly, copy) NSString *personToPerson;
@property (nonatomic, readonly, copy) NSString *primaryName;
@property (nonatomic, readonly) long long thirdPartyMsgSixMonths;
@property (nonatomic, readonly) long long thirdPartyMsgSixWeeks;
@property (nonatomic, readonly) long long thirdPartyMsgThreeMonths;
@property (nonatomic, readonly) long long thirdPartyMsgTwoWeeks;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aliasConcat;
- (long long)callSixMonths;
- (long long)callSixWeeks;
- (long long)callTwelveWeeks;
- (long long)callTwoWeeks;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityAliasConcat;
- (long long)firstPartyMsgSixMonths;
- (long long)firstPartyMsgSixWeeks;
- (long long)firstPartyMsgThreeMonths;
- (long long)firstPartyMsgTwoWeeks;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimaryName:(id)arg1 personToPerson:(id)arg2 aliasConcat:(id)arg3 entityAliasConcat:(id)arg4 personFromOrganization:(id)arg5 personFromLocation:(id)arg6 personFromEventLocation:(id)arg7 personFromEvent:(id)arg8 firstPartyMsgTwoWeeks:(long long)arg9 firstPartyMsgSixWeeks:(long long)arg10 firstPartyMsgThreeMonths:(long long)arg11 firstPartyMsgSixMonths:(long long)arg12 thirdPartyMsgTwoWeeks:(long long)arg13 thirdPartyMsgSixWeeks:(long long)arg14 thirdPartyMsgThreeMonths:(long long)arg15 thirdPartyMsgSixMonths:(long long)arg16 callTwoWeeks:(long long)arg17 callSixWeeks:(long long)arg18 callTwelveWeeks:(long long)arg19 callSixMonths:(long long)arg20 identifier:(id)arg21;
- (id)personFromEvent;
- (id)personFromEventLocation;
- (id)personFromLocation;
- (id)personFromOrganization;
- (id)personToPerson;
- (id)primaryName;
- (long long)thirdPartyMsgSixMonths;
- (long long)thirdPartyMsgSixWeeks;
- (long long)thirdPartyMsgThreeMonths;
- (long long)thirdPartyMsgTwoWeeks;

@end
