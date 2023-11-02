
@interface MUISearchRecentSuggester : NSObject <EFLoggable, MUISearchSuggester> {
    <EFScheduler> * _excludeFromBackupScheduler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _maxRecentCount;
    bool  _needSave;
    NSMutableSet * _recentSearches;
    NSURL * _storageURL;
    NSArray * _supportedCategories;
}

@property (nonatomic, readonly) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <EFScheduler> *excludeFromBackupScheduler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (nonatomic) unsigned long long maxRecentCount;
@property (nonatomic, retain) NSMutableSet *recentSearches;
@property (nonatomic, readonly) bool shouldQueryForAsYouType;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedCategories;

+ (id)log;
+ (id)suggesterWithPersistentDirectory:(id)arg1;

- (void).cxx_destruct;
- (void)_excludeStorageURLFromBackup;
- (void)_removeOldSuggestions;
- (void)addSuggestion:(id)arg1;
- (id)categories;
- (void)dealloc;
- (void)deleteSuggestion:(id)arg1;
- (id)excludeFromBackupScheduler;
- (id)generateSuggestionsUsingPhraseManager:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithPersistentDirectory:(id)arg1;
- (void)loadRecentSearches;
- (id)logIdentifier;
- (unsigned long long)maxRecentCount;
- (id)recentSearches;
- (void)saveRecentSearches;
- (void)setExcludeFromBackupScheduler:(id)arg1;
- (void)setMaxRecentCount:(unsigned long long)arg1;
- (void)setRecentSearches:(id)arg1;
- (void)setSupportedCategories:(id)arg1;
- (bool)shouldQueryForAsYouType;
- (id)supportedCategories;

@end
