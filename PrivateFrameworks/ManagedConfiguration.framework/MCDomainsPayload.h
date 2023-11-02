
@interface MCDomainsPayload : MCPayload {
    NSDictionary * _restrictions;
}

@property (nonatomic, retain) NSDictionary *restrictions;

+ (id)invalidDomainPatternErrorWithPattern:(id)arg1 field:(id)arg2;
+ (bool)isPatternValid:(id)arg1 forField:(id)arg2 outError:(id*)arg3;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)tooManyEntriesErrorWithMaxCount:(id)arg1 field:(id)arg2;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)restrictions;
- (void)setRestrictions:(id)arg1;
- (id)stubDictionary;

@end
