
@interface EXExtensionPointEnumerator : NSEnumerator {
    <EXEnumeratorConfig> * _config;
    _EXExtensionPoint * _currentExtensionPoint;
    NSString * _currentIdentifier;
    NSMutableDictionary * _currentSDKDictionaryForPlatform;
    NSDictionary * _extensionPoints;
    NSEnumerator * _extensionPointsKeyEnumerator;
    bool  _validateExtensionPoints;
}

@property (readonly) <EXEnumeratorConfig> *config;
@property (readonly) _EXExtensionPoint *currentExtensionPoint;
@property (readonly) NSString *currentIdentifier;
@property (readonly) NSMutableDictionary *currentSDKDictionaryForPlatform;
@property (readonly) NSDictionary *extensionPoints;
@property (readonly) NSEnumerator *extensionPointsKeyEnumerator;
@property (readonly) bool validateExtensionPoints;

+ (void)enumerateExtensionPointsInDirectoryAtURL:(id)arg1 block:(id /* block */)arg2;
+ (id)translateAppexptDictionary:(id)arg1 definitionURL:(id)arg2 isCatalyst:(bool)arg3;

- (void).cxx_destruct;
- (id)config;
- (id)currentExtensionPoint;
- (id)currentIdentifier;
- (id)currentSDKDictionaryForPlatform;
- (id)extensionPoints;
- (id)extensionPointsKeyEnumerator;
- (id)flattenEXExtensionPointConfigurationInDictionary:(id)arg1 identifier:(id)arg2;
- (id)initWithCacheURLs:(id)arg1 config:(id)arg2;
- (id)initWithSDKDictionary:(id)arg1 config:(id)arg2;
- (id)initWithSDKDictionary:(id)arg1 urls:(id)arg2 config:(id)arg3;
- (id)nextObject;
- (id)synthesizeNSExtensionKeysInDictionary:(id)arg1 identifier:(id)arg2;
- (id)translateXPCCacheDictionary:(id)arg1;
- (bool)validateExtensionPointIdentifier:(id)arg1 sdkDictionary:(id)arg2;
- (bool)validateExtensionPoints;

@end
