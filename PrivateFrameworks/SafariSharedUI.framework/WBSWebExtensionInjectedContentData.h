
@interface WBSWebExtensionInjectedContentData : NSObject {
    NSString * _contentScriptID;
    NSArray * _excludeGlobPatternStrings;
    NSArray * _excludeMatchPatternStrings;
    NSSet * _excludeMatchPatterns;
    NSArray * _includeGlobPatternStrings;
    NSArray * _includeMatchPatternStrings;
    NSSet * _includeMatchPatterns;
    long long  _injectionTime;
    bool  _injectsIntoAllFrames;
    bool  _isForMainWorld;
    bool  _matchesAboutBlank;
    bool  _persistAcrossLaunchesOfSafari;
    NSArray * _scriptContents;
    NSArray * _scriptPaths;
    NSArray * _styleSheetContents;
    NSArray * _styleSheetPaths;
    NSArray * _unexpandedExcludeMatchPatternStrings;
    NSArray * _unexpandedIncludeMatchPatternStrings;
    NSMutableSet * _userScripts;
    NSMutableSet * _userStyleSheets;
    WBSWebExtensionsController * _webExtensionsController;
}

@property (nonatomic, readonly, copy) NSString *contentScriptID;
@property (nonatomic, readonly) NSArray *excludeGlobPatternStrings;
@property (nonatomic, readonly) NSArray *excludeMatchPatternStrings;
@property (nonatomic, readonly) NSSet *excludeMatchPatterns;
@property (nonatomic, readonly) NSArray *includeGlobPatternStrings;
@property (nonatomic, readonly) NSArray *includeMatchPatternStrings;
@property (nonatomic, readonly) NSSet *includeMatchPatterns;
@property (nonatomic, readonly) long long injectionTime;
@property (nonatomic, readonly) bool injectsIntoAllFrames;
@property (nonatomic, readonly) bool isForMainWorld;
@property (nonatomic, readonly) bool matchesAboutBlank;
@property (nonatomic, readonly) bool persistAcrossLaunchesOfSafari;
@property (nonatomic, copy) NSArray *scriptContents;
@property (nonatomic, readonly) NSArray *scriptPaths;
@property (nonatomic, copy) NSArray *styleSheetContents;
@property (nonatomic, readonly) NSArray *styleSheetPaths;
@property (nonatomic, readonly, copy) NSArray *unexpandedExcludeMatchPatternStrings;
@property (nonatomic, readonly, copy) NSArray *unexpandedIncludeMatchPatternStrings;
@property (nonatomic, readonly, copy) NSMutableSet *userScripts;
@property (nonatomic, readonly, copy) NSMutableSet *userStyleSheets;

+ (id)supportedInjectedContentFeatures;

- (void).cxx_destruct;
- (bool)_parseDictionaryContainingContentScriptDetails:(id)arg1 extensionIdentifier:(id)arg2 error:(id*)arg3;
- (void)_validateExtensionResources:(id)arg1 forExtensionWithIdentifier:(id)arg2 errorMessage:(id*)arg3;
- (void)addWKUserScript:(id)arg1;
- (void)addWKUserStyleSheet:(id)arg1;
- (id)contentScriptID;
- (id)excludeGlobPatternStrings;
- (id)excludeMatchPatternStrings;
- (id)excludeMatchPatterns;
- (id)includeGlobPatternStrings;
- (id)includeMatchPatternStrings;
- (id)includeMatchPatterns;
- (id)initWithManifestDictionary:(id)arg1 extensionIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithPersistentContentScriptDetails:(id)arg1 extensionIdentifier:(id)arg2 extensionsController:(id)arg3 errorMessage:(id*)arg4;
- (long long)injectionTime;
- (bool)injectsIntoAllFrames;
- (bool)isForMainWorld;
- (bool)matchesAboutBlank;
- (bool)persistAcrossLaunchesOfSafari;
- (void)removeWKUserScripts;
- (void)removeWKUserStyleSheets;
- (id)scriptContents;
- (id)scriptPaths;
- (void)setScriptContents:(id)arg1;
- (void)setStyleSheetContents:(id)arg1;
- (id)styleSheetContents;
- (id)styleSheetPaths;
- (id)unexpandedExcludeMatchPatternStrings;
- (id)unexpandedIncludeMatchPatternStrings;
- (id)userScripts;
- (id)userStyleSheets;

@end
