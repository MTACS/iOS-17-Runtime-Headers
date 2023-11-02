
@interface CRKJSONConverter : NSObject

+ (id)JSONArrayForArray:(id)arg1;
+ (id)JSONDictionaryForDictionary:(id)arg1;
+ (id)bestEffortJSONObjectForObject:(id)arg1;
+ (id)stringForDate:(id)arg1;
+ (id)stringForObject:(id)arg1;

@end
