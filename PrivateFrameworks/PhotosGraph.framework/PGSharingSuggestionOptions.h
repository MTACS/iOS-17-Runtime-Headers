
@interface PGSharingSuggestionOptions : NSObject {
    bool  _debugMode;
    unsigned long long  _fetchLimit;
    bool  _filterLowWeightResults;
    bool  _includeUnverified;
    bool  _replaceMergeCandidates;
    unsigned long long  _sharingStream;
    bool  _useContactSuggestion;
}

@property (nonatomic) bool debugMode;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) bool filterLowWeightResults;
@property (nonatomic) bool includeUnverified;
@property (nonatomic) bool replaceMergeCandidates;
@property (nonatomic) unsigned long long sharingStream;
@property (nonatomic) bool useContactSuggestion;

+ (unsigned long long)_shareSheetSharingStream;
+ (id)optionsForClient:(unsigned long long)arg1;

- (bool)debugMode;
- (id)description;
- (unsigned long long)fetchLimit;
- (bool)filterLowWeightResults;
- (bool)includeUnverified;
- (id)init;
- (bool)replaceMergeCandidates;
- (void)setDebugMode:(bool)arg1;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setFilterLowWeightResults:(bool)arg1;
- (void)setIncludeUnverified:(bool)arg1;
- (void)setReplaceMergeCandidates:(bool)arg1;
- (void)setSharingStream:(unsigned long long)arg1;
- (void)setUseContactSuggestion:(bool)arg1;
- (unsigned long long)sharingStream;
- (bool)useContactSuggestion;

@end
