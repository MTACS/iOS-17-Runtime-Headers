
@interface MCCertificateTransparencyPayload : MCPayload {
    NSArray * _domainRules;
    NSArray * _hashDictionaries;
}

@property (nonatomic, readonly) NSArray *domainRules;
@property (nonatomic, readonly) NSArray *hashDictionaries;

+ (bool)isValidDomainRule:(id)arg1;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)domainRules;
- (id)hashDictionaries;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)stubDictionary;
- (id)subtitle1Label;
- (id)verboseDescription;

@end
