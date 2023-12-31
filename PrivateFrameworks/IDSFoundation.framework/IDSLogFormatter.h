
@interface IDSLogFormatter : NSObject

+ (id)descriptionForArray:(id)arg1 options:(unsigned long long)arg2;
+ (id)descriptionForArray:(id)arg1 options:(unsigned long long)arg2 level:(long long)arg3;
+ (id)descriptionForData:(id)arg1 options:(unsigned long long)arg2;
+ (id)descriptionForDictionary:(id)arg1 options:(unsigned long long)arg2;
+ (id)descriptionForDictionary:(id)arg1 options:(unsigned long long)arg2 level:(long long)arg3;
+ (id)descriptionForObject:(id)arg1 options:(unsigned long long)arg2;
+ (id)descriptionForObject:(id)arg1 options:(unsigned long long)arg2 level:(long long)arg3;
+ (id)descriptionForString:(id)arg1 options:(unsigned long long)arg2;

@end
