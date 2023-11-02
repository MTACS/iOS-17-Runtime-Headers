
@interface ATXHomeScreenPage : NSObject <NSSecureCoding> {
    NSDictionary * _appLocations;
    NSSet * _associatedModeUUIDs;
    NSArray * _candidateApps;
    bool  _hidden;
    NSArray * _leafIcons;
    unsigned long long  _maxPortraitColumns;
    unsigned long long  _maxPortraitRows;
    unsigned long long  _pageIndex;
    NSArray * _panels;
    NSArray * _stacks;
    long long  _suggestedPageType;
    NSString * _uniqueIdentifier;
    NSDictionary * _webClipLocations;
}

@property (nonatomic, copy) NSDictionary *appLocations;
@property (nonatomic, copy) NSSet *associatedModeUUIDs;
@property (nonatomic, copy) NSArray *candidateApps;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, readonly) NSArray *leafAppIcons;
@property (nonatomic, copy) NSArray *leafIcons;
@property (nonatomic) unsigned long long maxPortraitColumns;
@property (nonatomic) unsigned long long maxPortraitRows;
@property (nonatomic, readonly) unsigned long long numberOfLeafIconSpots;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic, copy) NSArray *panels;
@property (nonatomic, copy) NSArray *stacks;
@property (nonatomic) long long suggestedPageType;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, copy) NSDictionary *webClipLocations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_containsWidgetWithExtensionBundleId:(id)arg1;
- (id)_leafIconsFromExistingData;
- (id)appLocations;
- (id)associatedModeUUIDs;
- (id)candidateApps;
- (bool)containsAppPredictionPanel;
- (bool)containsSuggestionsWidget;
- (id)description;
- (id)dictionaryRepresentationForIntrospection;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateApps:(id /* block */)arg1;
- (void)enumerateAppsConsideringFolders:(bool)arg1 block:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (id)leafAppIcons;
- (id)leafIcons;
- (unsigned long long)maxPortraitColumns;
- (unsigned long long)maxPortraitRows;
- (id)nonFolderAppsOnPage;
- (unsigned long long)numberOfLeafIconSpots;
- (unsigned long long)pageIndex;
- (id)panels;
- (void)setAppLocations:(id)arg1;
- (void)setAssociatedModeUUIDs:(id)arg1;
- (void)setCandidateApps:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLeafIcons:(id)arg1;
- (void)setMaxPortraitColumns:(unsigned long long)arg1;
- (void)setMaxPortraitRows:(unsigned long long)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setPanels:(id)arg1;
- (void)setStacks:(id)arg1;
- (void)setSuggestedPageType:(long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setWebClipLocations:(id)arg1;
- (id)stacks;
- (long long)suggestedPageType;
- (id)uniqueIdentifier;
- (id)webClipLocations;

@end
