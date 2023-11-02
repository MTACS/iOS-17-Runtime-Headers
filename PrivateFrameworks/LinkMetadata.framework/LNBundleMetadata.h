
@interface LNBundleMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _actions;
    NSString * _autoShortcutProviderMangledName;
    NSArray * _autoShortcuts;
    NSDictionary * _entities;
    NSDictionary * _enums;
    LNBundleMetadataGeneratorDescription * _generator;
    NSArray * _negativePhrases;
    NSDictionary * _queries;
    long long  _shortcutTileColor;
    long long  _version;
}

@property (nonatomic, readonly, copy) NSDictionary *actions;
@property (nonatomic, readonly, copy) NSString *autoShortcutProviderMangledName;
@property (nonatomic, readonly, copy) NSArray *autoShortcuts;
@property (nonatomic, readonly, copy) NSDictionary *entities;
@property (nonatomic, readonly, copy) NSDictionary *enums;
@property (nonatomic, readonly, copy) LNBundleMetadataGeneratorDescription *generator;
@property (nonatomic, readonly, copy) NSArray *negativePhrases;
@property (nonatomic, readonly, copy) NSDictionary *queries;
@property (nonatomic, readonly) long long shortcutTileColor;
@property (nonatomic, readonly) long long version;

+ (long long)latestMetadataVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMetadataFileURL:(id)arg1 bundleURL:(id)arg2 effectiveBundleIdentifier:(id)arg3 error:(id*)arg4;
- (id)actions;
- (void)applyAttributionBundleIdentifier:(id)arg1;
- (id)autoShortcutProviderMangledName;
- (id)autoShortcuts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (id)enums;
- (id)generator;
- (unsigned long long)hash;
- (id)initWithActions:(id)arg1 entities:(id)arg2 queries:(id)arg3 enums:(id)arg4;
- (id)initWithActions:(id)arg1 entities:(id)arg2 queries:(id)arg3 enums:(id)arg4 autoShortcutProviderMangledName:(id)arg5 autoShortcuts:(id)arg6 shortcutTileColor:(long long)arg7 version:(long long)arg8 generator:(id)arg9;
- (id)initWithActions:(id)arg1 entities:(id)arg2 queries:(id)arg3 enums:(id)arg4 autoShortcutProviderMangledName:(id)arg5 autoShortcuts:(id)arg6 shortcutTileColor:(long long)arg7 version:(long long)arg8 generator:(id)arg9 negativePhrases:(id)arg10;
- (id)initWithActions:(id)arg1 entities:(id)arg2 queries:(id)arg3 enums:(id)arg4 autoShortcutProviderMangledName:(id)arg5 autoShortcuts:(id)arg6 version:(long long)arg7 generator:(id)arg8;
- (id)initWithActions:(id)arg1 entities:(id)arg2 queries:(id)arg3 enums:(id)arg4 autoShortcuts:(id)arg5 version:(long long)arg6 generator:(id)arg7;
- (id)initWithActions:(id)arg1 entities:(id)arg2 queries:(id)arg3 enums:(id)arg4 version:(long long)arg5;
- (id)initWithActions:(id)arg1 entities:(id)arg2 queries:(id)arg3 enums:(id)arg4 version:(long long)arg5 generator:(id)arg6;
- (id)initWithArray:(id)arg1;
- (id)initWithBundle:(id)arg1 usingEffectiveBundleIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadataFileURL:(id)arg1 bundleURL:(id)arg2 effectiveBundleIdentifier:(id)arg3 error:(id*)arg4;
- (bool)isEqual:(id)arg1;
- (id)negativePhrases;
- (id)queries;
- (long long)shortcutTileColor;
- (id)verboseDescription;
- (long long)version;

@end
