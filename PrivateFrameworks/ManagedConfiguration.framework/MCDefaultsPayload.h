
@interface MCDefaultsPayload : MCPayload {
    NSDictionary * _defaultsByDomain;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)defaultsForDomain:(id)arg1;
- (id)domains;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)isAllowedToWriteDefaults;
- (id)stubDictionary;
- (id)title;
- (id)verboseDescription;

@end
