
@interface JXURLEncoding : NSObject

+ (void)encodeObject:(id)arg1 withKey:(id)arg2 andSubKey:(id)arg3 intoArray:(id)arg4;
+ (id)encodedDictionary:(id)arg1;
+ (id)encodedString:(id)arg1;
+ (id)formEncodedDictionary:(id)arg1;
+ (id)formEncodedString:(id)arg1;

@end
