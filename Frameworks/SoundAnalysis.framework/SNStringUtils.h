
@interface SNStringUtils : NSObject

+ (id)componentsOfString:(id)arg1 separatedByString:(id)arg2 componentsCount:(long long)arg3 error:(id*)arg4;
+ (id)doubleFromString:(id)arg1;
+ (id)longLongFromString:(id)arg1;
+ (id)nonemptyComponentsOfString:(id)arg1 separatedByCharactersInSet:(id)arg2;
+ (id)nonemptyComponentsOfString:(id)arg1 separatedByString:(id)arg2;
+ (id)nonemptyStringsArrayFromCollection:(id)arg1;
+ (id)numberFromString:(id)arg1;
+ (id)numberFromString:(id)arg1 error:(id*)arg2;
+ (Class)parseClassFromString:(id)arg1 error:(id*)arg2;
+ (id)parsePositiveUInt32FromString:(id)arg1 error:(id*)arg2;
+ (id)parseUInt32FromString:(id)arg1 error:(id*)arg2;
+ (id)pathComponentsOfString:(id)arg1 componentsCount:(long long)arg2 error:(id*)arg3;
+ (id)removeWhitespaceFromString:(id)arg1;
+ (id)unsignedLongLongFromString:(id)arg1;
+ (bool)validateComponentsOfString:(id)arg1 separatedByString:(id)arg2 hasCount:(long long)arg3 error:(id*)arg4;
+ (bool)validatePathComponentsOfString:(id)arg1 hasCount:(long long)arg2 error:(id*)arg3;
+ (id)whitespaceDelimitedWordsFromString:(id)arg1;

- (id)init;

@end
