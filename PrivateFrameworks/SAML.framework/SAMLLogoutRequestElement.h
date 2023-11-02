
@interface SAMLLogoutRequestElement : SAMLBaseElement

@property (nonatomic, readonly) NSString *consent;
@property (nonatomic, retain) NSString *destination;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *issueInstant;
@property (nonatomic, retain) NSString *issuer;
@property (nonatomic, readonly) SAMLNameId *nameId;
@property (nonatomic, retain) NSDate *notOnOrAfter;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSString *sessionIndex;
@property (nonatomic, readonly) SAMLSignature *signature;

+ (id)createElement:(id*)arg1;

- (id)consent;
- (id)destination;
- (id)identifier;
- (id)issueInstant;
- (id)issuer;
- (id)nameId;
- (id)notOnOrAfter;
- (id)reason;
- (id)sessionIndex;
- (void)setDestination:(id)arg1;
- (void)setIssuer:(id)arg1;
- (void)setNotOnOrAfter:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSessionIndex:(id)arg1;
- (id)signature;

@end
