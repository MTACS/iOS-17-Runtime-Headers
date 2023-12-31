
@interface SAMLResponseElement : SAMLBaseElement

@property (nonatomic, readonly) NSArray *assertions;
@property (nonatomic, readonly) NSString *consent;
@property (nonatomic, readonly) NSString *destination;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *issueInstant;
@property (nonatomic, readonly) NSString *issuer;
@property (nonatomic, readonly) NSString *relatedRequest;
@property (nonatomic, readonly) SAMLSignature *signature;
@property (nonatomic, readonly) SAMLStatus *status;

+ (id)createElement:(id*)arg1;

- (bool)assertionMeetsConditions:(id*)arg1;
- (id)assertions;
- (id)authnStatement;
- (id)consent;
- (id)destination;
- (id)identifier;
- (id)issueInstant;
- (id)issuer;
- (id)relatedRequest;
- (id)signature;
- (id)status;

@end
