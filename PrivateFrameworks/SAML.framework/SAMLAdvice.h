
@interface SAMLAdvice : SAMLBaseElement

@property (nonatomic, retain) SAMLAssertion *assertion;
@property (nonatomic, retain) NSString *assertionIDRef;
@property (nonatomic, retain) NSString *assertionURIRef;

+ (id)createElement:(id*)arg1;

- (id)assertion;
- (id)assertionIDRef;
- (id)assertionURIRef;
- (void)setAssertion:(id)arg1;
- (void)setAssertionIDRef:(id)arg1;
- (void)setAssertionURIRef:(id)arg1;

@end
