
@interface PXSearchHistoryManager : NSObject {
    NSArray * _recentSearches;
}

@property (nonatomic, retain) NSArray *recentSearches;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_readRecentSearchesFromURL:(id)arg1;
- (id)_recentSearchesFileURL;
- (bool)_writeRecentSearches:(id)arg1 toURL:(id)arg2 error:(out id*)arg3;
- (void)clearRecentSearches;
- (id)recentSearches;
- (void)saveRecentSearch:(id)arg1;
- (void)setRecentSearches:(id)arg1;

@end
