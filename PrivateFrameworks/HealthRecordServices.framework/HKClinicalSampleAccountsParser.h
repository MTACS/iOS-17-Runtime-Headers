
@interface HKClinicalSampleAccountsParser : NSObject

+ (id)_jsonDictionaryFromJSONObject:(id)arg1 subElement:(id)arg2 error:(id*)arg3;
+ (id)_stringOnlyDictionaryFromJSONDictionary:(id)arg1;

- (id)_parseAccountsFromJSONData:(id)arg1 error:(id*)arg2;
- (id)_parseBatchesFromSampleAccountJSONDict:(id)arg1 error:(id*)arg2;
- (id)_parseGatewayFromProviderJSONDict:(id)arg1 error:(id*)arg2;
- (id)_parseProviderFromSampleAccountJSONDict:(id)arg1 error:(id*)arg2;
- (id)parseAccountsFromFile:(id)arg1 error:(id*)arg2;

@end
