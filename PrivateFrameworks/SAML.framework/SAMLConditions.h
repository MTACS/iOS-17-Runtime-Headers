
@interface SAMLConditions : SAMLBaseElement {
    NSArray * _conditions;
}

@property (nonatomic, readonly) NSArray *audienceRestrictions;
@property (nonatomic, readonly) NSArray *conditions;
@property (nonatomic, readonly) NSDate *notBefore;
@property (nonatomic, readonly) NSDate *notOnOrAfter;
@property (nonatomic, readonly) bool oneTimeUse;
@property (nonatomic, readonly) NSNumber *proxyRestrictionAudienceCount;
@property (nonatomic, readonly) NSArray *proxyRestrictions;

+ (id)createElement:(id*)arg1;

- (void).cxx_destruct;
- (bool)assertionMeetsConditions:(id*)arg1;
- (id)audienceRestrictions;
- (id)conditions;
- (id)notBefore;
- (id)notOnOrAfter;
- (bool)oneTimeUse;
- (id)proxyRestrictionAudienceCount;
- (id)proxyRestrictions;

@end
