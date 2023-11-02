
@interface VUIDocumentPreFetchedDataPlayerHUD : VUIDocumentPreFetchedData {
    NSString * _canonicalId;
    NSArray * _excludedCanonicals;
    bool  _includeMultiviewButton;
    bool  _isMultiviewPlayer;
    NSString * _locale;
    NSArray * _multiviewIdentifiers;
    bool  _playFromStart;
    NSString * _tabId;
}

@property (nonatomic, copy) NSString *canonicalId;
@property (nonatomic, retain) NSArray *excludedCanonicals;
@property (nonatomic) bool includeMultiviewButton;
@property (nonatomic) bool isMultiviewPlayer;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSArray *multiviewIdentifiers;
@property (nonatomic) bool playFromStart;
@property (nonatomic, copy) NSString *tabId;

- (void).cxx_destruct;
- (id)canonicalId;
- (id)excludedCanonicals;
- (bool)includeMultiviewButton;
- (id)initWithDictionary:(id)arg1;
- (bool)isMultiviewPlayer;
- (id)jsonData;
- (id)locale;
- (id)multiviewIdentifiers;
- (bool)playFromStart;
- (void)setCanonicalId:(id)arg1;
- (void)setExcludedCanonicals:(id)arg1;
- (void)setIncludeMultiviewButton:(bool)arg1;
- (void)setIsMultiviewPlayer:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setMultiviewIdentifiers:(id)arg1;
- (void)setPlayFromStart:(bool)arg1;
- (void)setTabId:(id)arg1;
- (id)tabId;

@end
