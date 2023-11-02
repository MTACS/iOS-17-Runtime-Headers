
@interface SBHWidget : NSObject <BSDescriptionProviding, CHSWidgetIdentifiable, CHSWidgetPersonality, NSCopying, NSSecureCoding, SBLeafIconDataSource> {
    NSString * _containerBundleIdentifier;
    NSString * _displayName;
    NSString * _extensionBundleIdentifier;
    NSString * _kind;
    long long  _suggestionSource;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSString *configurationStorageIdentifier;
@property (nonatomic, readonly, copy) NSString *containerBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) CHSExtensionIdentity *extensionIdentity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly) long long suggestionSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configurationStorageIdentifier;
- (id)containerBundleIdentifier;
- (id)copyWithSuggestionSource:(long long)arg1;
- (id)copyWithUniqueIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (id)extensionIdentity;
- (unsigned long long)hash;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)iconSupportsConfiguration:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(id)arg1 extensionBundleIdentifier:(id)arg2;
- (id)initWithKind:(id)arg1 extensionBundleIdentifier:(id)arg2 containerBundleIdentifier:(id)arg3;
- (id)initWithUniqueIdentifier:(id)arg1 kind:(id)arg2 extensionBundleIdentifier:(id)arg3 containerBundleIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (bool)matches:(id)arg1;
- (bool)matchesPersonality:(id)arg1;
- (unsigned long long)priorityForIcon:(id)arg1;
- (void)resetDisplayName;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)suggestionSource;
- (id)uniqueIdentifier;

@end
