
@interface CRKUnionAssertionProvider : NSObject <CATAssertionProviding> {
    NSArray * _assertionProviders;
}

@property (nonatomic, readonly, copy) NSArray *assertionProviders;

+ (id)activeIDSClassSessionAssertionProviderWithPrefix:(id)arg1;

- (void).cxx_destruct;
- (id)acquireAssertion;
- (id)assertionProviders;
- (id)initWithAssertionProviders:(id)arg1;

@end
