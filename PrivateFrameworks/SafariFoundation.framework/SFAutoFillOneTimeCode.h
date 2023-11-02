
@interface SFAutoFillOneTimeCode : NSObject <NSSecureCoding> {
    NSString * _GUID;
    NSString * _detectedCode;
    NSString * _displayCode;
    NSString * _domain;
    bool  _domainStrictMatch;
    NSString * _embeddedDomain;
    NSArray * _embeddedDomains;
    NSString * _handle;
    NSString * _machineReadableCode;
    long long  _messageID;
    long long  _source;
    NSDate * _timestamp;
    WBSTOTPGenerator * _totpGenerator;
    NSString * _user;
}

@property (nonatomic, readonly, copy) NSString *GUID;
@property (nonatomic, readonly, copy) NSURL *_domainBoundEmbeddedURL;
@property (nonatomic, readonly, copy) NSURL *_domainBoundTopLevelURL;
@property (nonatomic, readonly, copy) NSString *code;
@property (nonatomic, readonly, copy) NSString *detectedCode;
@property (nonatomic, readonly, copy) NSString *displayCode;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly) bool domainStrictMatch;
@property (nonatomic, readonly, copy) NSString *embeddedDomain;
@property (nonatomic, readonly, copy) NSArray *embeddedDomains;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly, copy) NSString *machineReadableCode;
@property (nonatomic, readonly) long long messageID;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) WBSTOTPGenerator *totpGenerator;
@property (nonatomic, readonly, copy) NSString *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)GUID;
- (id)_domainBoundEmbeddedURL;
- (id)_domainBoundTopLevelURL;
- (id)_embeddedDomainArrayFromIMCoreEmbeddedDomains:(id)arg1;
- (long long)_matchBoundDomainAndEmbeddedDomainWithFrameURLs:(id)arg1;
- (long long)_matchBoundDomainAndEmbeddedDomainsWithFrameURLs:(id)arg1;
- (long long)_matchURL:(id)arg1 withBoundDomainURL:(id)arg2 strict:(bool)arg3;
- (id)_secureURLForDomain:(id)arg1;
- (id)_stringForSource:(long long)arg1;
- (id)code;
- (id)description;
- (id)detectedCode;
- (id)displayCode;
- (id)domain;
- (bool)domainStrictMatch;
- (id)embeddedDomain;
- (id)embeddedDomains;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIMCoreDictionary:(id)arg1;
- (id)initWithMailOneTimeCode:(id)arg1 timestamp:(id)arg2 messageID:(long long)arg3;
- (id)initWithTOTPGenerator:(id)arg1 user:(id)arg2 highLevelDomain:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedSubtitleForContext:(long long)arg1;
- (id)localizedTitleForContext:(long long)arg1;
- (id)machineReadableCode;
- (long long)matchBoundDomainsWithFrameURLs:(id)arg1;
- (long long)matchDomainWithURL:(id)arg1;
- (long long)messageID;
- (long long)source;
- (id)timestamp;
- (id)totpGenerator;
- (id)user;

@end
