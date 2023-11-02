
@interface SAMLAttributeQueryElement : SAMLBaseElement

@property (nonatomic, retain) NSString *channelId;
@property (nonatomic, readonly) NSString *consent;
@property (nonatomic, readonly) NSString *destination;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *issueInstant;
@property (nonatomic, readonly) NSArray *samlAttributes;
@property (nonatomic, readonly) SAMLSignature *signature;
@property (nonatomic, retain) SAMLSubject *subject;

+ (id)createElement:(id*)arg1;

- (void)addAttribute:(id)arg1;
- (id)channelId;
- (id)consent;
- (id)destination;
- (id)identifier;
- (id)issueInstant;
- (id)samlAttributes;
- (void)setChannelId:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)signature;
- (id)subject;

@end
