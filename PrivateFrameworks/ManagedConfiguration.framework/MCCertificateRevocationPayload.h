
@interface MCCertificateRevocationPayload : MCPayload {
    NSArray * _hashDictionaries;
}

@property (nonatomic, readonly) NSArray *hashDictionaries;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)hashDictionaries;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)stubDictionary;
- (id)subtitle1Label;
- (id)verboseDescription;

@end
