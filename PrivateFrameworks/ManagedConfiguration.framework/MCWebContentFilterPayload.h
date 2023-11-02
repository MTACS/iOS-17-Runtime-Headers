
@interface MCWebContentFilterPayload : MCPayload {
    NSArray * _allowListBookmarks;
    bool  _autoFilterEnabled;
    NSString * _contentFilterUUID;
    NSArray * _denyListURLStrings;
    bool  _filterBrowsers;
    bool  _filterSockets;
    NSString * _filterType;
    NSString * _name;
    NSArray * _permittedURLStrings;
    NSString * _pluginBundleID;
    NSDictionary * _pluginConfiguration;
}

@property (nonatomic, retain) NSArray *allowListBookmarks;
@property (nonatomic) bool autoFilterEnabled;
@property (nonatomic, retain) NSString *contentFilterUUID;
@property (nonatomic, retain) NSArray *denyListURLStrings;
@property (nonatomic) bool filterBrowsers;
@property (nonatomic) bool filterSockets;
@property (nonatomic, copy) NSString *filterType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSArray *permittedURLStrings;
@property (nonatomic, copy) NSString *pluginBundleID;
@property (nonatomic, retain) NSDictionary *pluginConfiguration;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)pluginFilterKeysAndClasses;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)allowListBookmarks;
- (bool)autoFilterEnabled;
- (id)contentFilterUUID;
- (id)denyListURLStrings;
- (bool)filterBrowsers;
- (bool)filterSockets;
- (id)filterType;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)name;
- (id)payloadDescriptionKeyValueSections;
- (id)permittedURLStrings;
- (id)pluginBundleID;
- (id)pluginConfiguration;
- (id)restrictions;
- (void)setAllowListBookmarks:(id)arg1;
- (void)setAutoFilterEnabled:(bool)arg1;
- (void)setContentFilterUUID:(id)arg1;
- (void)setDenyListURLStrings:(id)arg1;
- (void)setFilterBrowsers:(bool)arg1;
- (void)setFilterSockets:(bool)arg1;
- (void)setFilterType:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPermittedURLStrings:(id)arg1;
- (void)setPluginBundleID:(id)arg1;
- (void)setPluginConfiguration:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)verboseDescription;

@end
