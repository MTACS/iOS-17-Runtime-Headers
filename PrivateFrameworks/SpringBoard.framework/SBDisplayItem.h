
@interface SBDisplayItem : NSObject <BSDescriptionProviding, NSCopying> {
    NSString * _bundleIdentifier;
    id /* block */  _sceneIdentifierFromBundleIdentifierGenerator;
    long long  _type;
    NSString * _uniqueIdentifier;
    NSString * _uniqueStringRepresentation;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *webClipIdentifier;

+ (id)applicationDisplayItemWithBundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2;
+ (id)displayItemForLayoutElement:(id)arg1;
+ (id)displayItemWithProtobufRepresentation:(id)arg1;
+ (id)displayItemWithType:(long long)arg1 bundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3;
+ (id)homeScreenDisplayItem;
+ (id)remoteAlertDisplayItemWithServiceBundleIdentifier:(id)arg1;
+ (id)switcherServiceDisplayItemWithServiceIdentifier:(id)arg1;
+ (id)webAppDisplayItemWithWebAppIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_calculateUniqueStringRepresentation;
- (id)_initWithArrayPlistRepresentation:(id)arg1;
- (id)_initWithDictionaryPlistRepresentation:(id)arg1;
- (id)_initWithLegacyPlistRepresentation:(id)arg1 sceneIdentifierFromBundleIdentifierGenerator:(id /* block */)arg2;
- (id)_initWithPlistRepresentation:(id)arg1 sceneIdentifierFromBundleIdentifierGenerator:(id /* block */)arg2;
- (id)_newSceneIdentifierForBundleIdentifier:(id)arg1;
- (id)bundleIdentifier;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayItemForFloatingDockSuggestionsComparison;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLegacyPlistRepresentation:(id)arg1;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)initWithType:(long long)arg1 bundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDisplayItemForFloatingDockSuggestions:(id)arg1;
- (bool)isHomeScreenDisplayItem;
- (id)plistRepresentation;
- (id)protobufRepresentation;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;
- (id)uniqueIdentifier;
- (id)uniqueStringRepresentation;
- (id)webClipIdentifier;

@end
