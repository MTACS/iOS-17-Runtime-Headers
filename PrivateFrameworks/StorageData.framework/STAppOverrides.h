
@interface STAppOverrides : NSObject {
    int  _category;
    NSString * _defaultName;
    bool  _forceExcludeUsageBundle;
    bool  _forceHidden;
    bool  _forceVisible;
    bool  _hideLastUsed;
    NSArray * _includeCacheDeleteKeys;
    NSArray * _includeContainers;
    NSArray * _includeFsPaths;
    NSArray * _includeMediaUsage;
    bool  _includeSoftwareUpdates;
    bool  _isICloud;
    NSString * _usageBundleOverride;
}

@property (readonly) int category;
@property (readonly) NSString *defaultName;
@property (readonly) bool excludeUsageBundle;
@property (readonly) bool forceExcludeUsageBundle;
@property (readonly) bool forceHidden;
@property (readonly) bool forceVisible;
@property (readonly) bool hideLastUsed;
@property (readonly) NSArray *includeCacheDeleteKeys;
@property (readonly) NSArray *includeContainers;
@property (readonly) NSArray *includeFsPaths;
@property (readonly) NSArray *includeMediaUsage;
@property (readonly) bool includeSoftwareUpdates;
@property (readonly) bool isICloud;
@property (readonly) bool isMediaApp;
@property (readonly) NSString *usageBundleOverride;

+ (id)overrides;
+ (id)overridesFor:(id)arg1;
+ (id)overridesForApplication:(id)arg1;

- (void).cxx_destruct;
- (int)category;
- (id)defaultName;
- (bool)excludeUsageBundle;
- (bool)forceExcludeUsageBundle;
- (bool)forceHidden;
- (bool)forceVisible;
- (bool)hideLastUsed;
- (id)includeCacheDeleteKeys;
- (id)includeContainers;
- (id)includeFsPaths;
- (id)includeMediaUsage;
- (bool)includeSoftwareUpdates;
- (id)initWithDictionary:(id)arg1;
- (bool)isICloud;
- (bool)isMediaApp;
- (id)usageBundleOverride;

@end
