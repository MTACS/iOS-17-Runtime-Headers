
@interface SAMLEvidence : SAMLBaseElement

@property (nonatomic, readonly) SAMLAssertion *assertion;
@property (nonatomic, readonly) NSString *assertionIdRef;
@property (nonatomic, readonly) NSString *assertionURIRef;

+ (id)createElement:(id*)arg1;

- (id)assertion;
- (id)assertionIdRef;
- (id)assertionURIRef;

@end
