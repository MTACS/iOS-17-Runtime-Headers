
@interface SAMLAuthZDecision : SAMLBaseElement

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSString *decision;
@property (nonatomic, readonly) SAMLEvidence *evidence;
@property (nonatomic, readonly) NSString *resource;

+ (id)createElement:(id*)arg1;

- (id)actions;
- (id)decision;
- (id)evidence;
- (id)resource;

@end
