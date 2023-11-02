
@interface BCSURLPatternMatchResult : NSObject <BCSExpiring> {
    NSString * _bundleID;
    <BCSDateHelperProtocol> * _dateHelper;
    NSDate * _expirationDate;
    NSURL * _extractedURL;
    NSURL * _originalURL;
    NSString * _pattern;
    unsigned long long  _totalAnyMatches;
    unsigned long long  _totalConsecutivePrefixMatches;
    unsigned long long  _totalExactMatches;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) <BCSDateHelperProtocol> *dateHelper;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) NSURL *extractedURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool matchFound;
@property (nonatomic, readonly) NSURL *originalURL;
@property (nonatomic, readonly) NSString *pattern;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalAnyMatches;
@property (nonatomic, readonly) unsigned long long totalConsecutivePrefixMatches;
@property (nonatomic, readonly) unsigned long long totalExactMatches;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)dateHelper;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)expirationDate;
- (id)extractedURL;
- (id)initWithOriginalURL:(id)arg1 extractedURL:(id)arg2 totalConsecutivePrefixMatches:(unsigned long long)arg3 totalExactMatches:(unsigned long long)arg4 totalAnyMatches:(unsigned long long)arg5 bundleID:(id)arg6 pattern:(id)arg7 expirationDate:(id)arg8 dateHelper:(id)arg9;
- (bool)isExpired;
- (bool)matchFound;
- (id)originalURL;
- (id)pattern;
- (void)setExpirationDate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)totalAnyMatches;
- (unsigned long long)totalConsecutivePrefixMatches;
- (unsigned long long)totalExactMatches;

@end
