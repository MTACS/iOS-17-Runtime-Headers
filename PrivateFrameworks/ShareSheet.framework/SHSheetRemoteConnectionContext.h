
@interface SHSheetRemoteConnectionContext : NSObject {
    NSArray * _assetIdentifiers;
    _UIActivityDiscoveryContext * _discoveryContext;
    bool  _hideSuggestions;
    bool  _instantShareSheet;
    bool  _isSharePlayAvailable;
    NSArray * _peopleSuggestionBundleIds;
    double  _peopleSuggestionsTimeout;
    NSData * _processedImageResultsData;
    bool  _remoteShareSheet;
    NSDictionary * _sandboxExtensionsByfileURLPath;
    NSString * _sessionIdentifier;
    bool  _shouldSuggestFamilyMembers;
    bool  _supportsCollaboration;
    NSArray * _urlsBeingShared;
    unsigned long long  _xrRenderingMode;
}

@property (nonatomic, copy) NSArray *assetIdentifiers;
@property (nonatomic, retain) _UIActivityDiscoveryContext *discoveryContext;
@property (nonatomic) bool hideSuggestions;
@property (nonatomic) bool instantShareSheet;
@property (nonatomic) bool isSharePlayAvailable;
@property (nonatomic, copy) NSArray *peopleSuggestionBundleIds;
@property (nonatomic) double peopleSuggestionsTimeout;
@property (nonatomic, copy) NSData *processedImageResultsData;
@property (nonatomic) bool remoteShareSheet;
@property (nonatomic, copy) NSDictionary *sandboxExtensionsByfileURLPath;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (nonatomic) bool shouldSuggestFamilyMembers;
@property (nonatomic) bool supportsCollaboration;
@property (nonatomic, copy) NSArray *urlsBeingShared;
@property (nonatomic) unsigned long long xrRenderingMode;

- (void).cxx_destruct;
- (id)assetIdentifiers;
- (id)createContextDictionary;
- (id)discoveryContext;
- (bool)hideSuggestions;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1;
- (bool)instantShareSheet;
- (bool)isSharePlayAvailable;
- (id)peopleSuggestionBundleIds;
- (double)peopleSuggestionsTimeout;
- (id)processedImageResultsData;
- (bool)remoteShareSheet;
- (id)sandboxExtensionsByfileURLPath;
- (id)sessionIdentifier;
- (void)setAssetIdentifiers:(id)arg1;
- (void)setDiscoveryContext:(id)arg1;
- (void)setHideSuggestions:(bool)arg1;
- (void)setInstantShareSheet:(bool)arg1;
- (void)setIsSharePlayAvailable:(bool)arg1;
- (void)setPeopleSuggestionBundleIds:(id)arg1;
- (void)setPeopleSuggestionsTimeout:(double)arg1;
- (void)setProcessedImageResultsData:(id)arg1;
- (void)setRemoteShareSheet:(bool)arg1;
- (void)setSandboxExtensionsByfileURLPath:(id)arg1;
- (void)setShouldSuggestFamilyMembers:(bool)arg1;
- (void)setSupportsCollaboration:(bool)arg1;
- (void)setUrlsBeingShared:(id)arg1;
- (void)setXrRenderingMode:(unsigned long long)arg1;
- (bool)shouldSuggestFamilyMembers;
- (bool)supportsCollaboration;
- (id)urlsBeingShared;
- (unsigned long long)xrRenderingMode;

@end
