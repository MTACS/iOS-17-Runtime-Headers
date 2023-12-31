
@interface IPFoundationNamePreferenceInfoProvider : NSObject <IPNamePreferenceInfoProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)canonicalKeyToValueIdentifierToNumericValueMap;
+ (id)canonicalNameToNativeKeyName;
+ (id)domain;
+ (id)nativeKeyNameToCanonicalKeyName;
+ (id)valueIdentifierToValueMapFromCanonicalKey:(id)arg1;
+ (id)valueToValueIdentifierMapFromCanonicalKey:(id)arg1;

@end
