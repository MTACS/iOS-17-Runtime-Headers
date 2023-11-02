
@protocol IPNamePreferenceInfoProvider <NSObject>

@required

+ (NSDictionary *)canonicalKeyToValueIdentifierToNumericValueMap;
+ (NSDictionary *)canonicalNameToNativeKeyName;
+ (NSString *)domain;
+ (NSDictionary *)nativeKeyNameToCanonicalKeyName;
+ (NSDictionary *)valueIdentifierToValueMapFromCanonicalKey:(NSString *)arg1;
+ (NSDictionary *)valueToValueIdentifierMapFromCanonicalKey:(NSString *)arg1;

@end
