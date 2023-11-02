
@interface PGGraphNamingProcessor : NSObject {
    NSMutableArray * _analyzersToRun;
    NSMutableDictionary * _contactMatchesByPersonLocalIdentifier;
    NSMutableDictionary * _filteredOutContactMatchesByPersonLocalIdentifier;
    PGGraph * _graph;
    NSObject<OS_os_log> * _loggingConnection;
    PGGraphMomentNodeCollection * _momentNodes;
    unsigned long long  _numberOfSignals;
    PGGraphPersonNodeCollection * _personNodesToName;
    PHPhotoLibrary * _photoLibrary;
    unsigned long long  _runOptions;
    NSMutableDictionary * _selectedContactMatchesByPersonLocalIdentifier;
    NSArray * _sortedPoolOfContactIdentifiers;
}

@property (nonatomic, retain) NSMutableArray *analyzersToRun;
@property (nonatomic, retain) NSMutableDictionary *contactMatchesByPersonLocalIdentifier;
@property (nonatomic, retain) NSMutableDictionary *filteredOutContactMatchesByPersonLocalIdentifier;
@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) unsigned long long numberOfSignals;
@property (nonatomic, readonly) PGGraphPersonNodeCollection *personNodesToName;
@property (nonatomic, readonly) unsigned long long runOptions;
@property (nonatomic, retain) NSMutableDictionary *selectedContactMatchesByPersonLocalIdentifier;
@property (nonatomic, retain) NSArray *sortedPoolOfContactIdentifiers;

- (void).cxx_destruct;
- (id)_applyMessageFrequencyPenaltyToMatchScores:(id)arg1;
- (void)_extractSignalsFromRunOptions;
- (id)_extractSortedPoolOfContactIdentifiersWithProgressBlock:(id /* block */)arg1;
- (void)_limitNumberOfContactSuggestionsPerPerson;
- (id)_personMatchScoresByContactIdentifierFromMatchProperties:(id)arg1;
- (void)_removeSuggestionOfContact:(id)arg1 forPerson:(id)arg2;
- (id)_swapPersonAndContactIdentifiersFromMatchesByContactIdentifier:(id)arg1;
- (id)analyzersToRun;
- (id)contactMatchesByPersonLocalIdentifier;
- (void)enumerateContactSuggestionsForPersonNode:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)filterContactMatches;
- (id)filteredOutContactMatchesByPersonLocalIdentifier;
- (id)graph;
- (id)initWithPersonNodes:(id)arg1 runOptions:(unsigned long long)arg2;
- (id)initWithPersonNodes:(id)arg1 runOptions:(unsigned long long)arg2 photoLibrary:(id)arg3 loggingConnection:(id)arg4;
- (id)matchPropertiesBetweenContactIdentifier:(id)arg1 andPersonLocalIdentifier:(id)arg2;
- (id)momentNodes;
- (unsigned long long)numberOfSignals;
- (id)personNodesToName;
- (id)personNodesToNameFromPersonNodes:(id)arg1;
- (void)runNamingAnalysisWithProgressBlock:(id /* block */)arg1;
- (unsigned long long)runOptions;
- (id)selectedContactMatchesByPersonLocalIdentifier;
- (void)setAnalyzersToRun:(id)arg1;
- (void)setContactMatchesByPersonLocalIdentifier:(id)arg1;
- (void)setFilteredOutContactMatchesByPersonLocalIdentifier:(id)arg1;
- (void)setSelectedContactMatchesByPersonLocalIdentifier:(id)arg1;
- (void)setSortedPoolOfContactIdentifiers:(id)arg1;
- (id)sortedPoolOfContactIdentifiers;

@end
