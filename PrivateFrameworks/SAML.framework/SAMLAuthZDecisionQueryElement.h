
@interface SAMLAuthZDecisionQueryElement : SAMLBaseElement

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, retain) NSString *channelId;
@property (nonatomic, readonly) NSString *consent;
@property (nonatomic, retain) NSString *destination;
@property (nonatomic, retain) SAMLEvidence *evidence;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *issueInstant;
@property (nonatomic, retain) NSString *resource;
@property (nonatomic, readonly) SAMLSignature *signature;
@property (nonatomic, retain) SAMLSubject *subject;

+ (id)createElement:(id*)arg1;

- (id)actions;
- (void)addAction:(id)arg1;
- (id)channelId;
- (id)consent;
- (id)destination;
- (id)evidence;
- (id)identifier;
- (id)issueInstant;
- (id)resource;
- (void)setChannelId:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setEvidence:(id)arg1;
- (void)setResource:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)signature;
- (id)subject;

@end
