
@interface MCDeclarationsPayload : MCPayload {
    NSArray * _declarations;
}

@property (nonatomic, readonly) NSArray *declarations;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)declarations;
- (id)declarationsDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)verboseDescription;

@end
