
@interface REElement : NSObject <NSCoding, NSCopying, REAutomaticExportedInterface> {
    REElementAction * _action;
    NSString * _applicationBundleIdentifier;
    NSString * _bundleIdentifier;
    REContent * _content;
    REContent * _idealizedContent;
    NSString * _identifier;
    NSString * _namespacedIdentifier;
    unsigned long long  _privacyBehavior;
    NSArray * _relevanceProviders;
}

@property (nonatomic, readonly) REElementAction *action;
@property (nonatomic, retain) NSString *applicationBundleIdentifier;
@property (retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) REContent *content;
@property (nonatomic, readonly) REContent *idealizedContent;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *namespacedIdentifier;
@property (nonatomic, readonly) unsigned long long privacyBehavior;
@property (nonatomic, readonly) NSArray *relevanceProviders;

+ (id)_supportedDictionaryEncodingKeys;

- (void).cxx_destruct;
- (bool)_relevanceProvidersEqualToElement:(id)arg1;
- (void)_updateIdentifier:(id)arg1;
- (void)_updateNamespacedIdentifier:(id)arg1;
- (id)action;
- (id)applicationBundleIdentifier;
- (id)bundleIdentifier;
- (id)content;
- (id)copyElementWithUpdatedRelevanceProviders:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncodingWithRelevanceProviderGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeContent;
- (unsigned long long)hash;
- (id)idealizedContent;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 relevanceProviderGenerator:(id)arg2;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5 privacyBehavior:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isNoContentElement;
- (id)namespacedIdentifier;
- (unsigned long long)privacyBehavior;
- (id)relevanceProviders;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (id)shallowCopy;

@end
