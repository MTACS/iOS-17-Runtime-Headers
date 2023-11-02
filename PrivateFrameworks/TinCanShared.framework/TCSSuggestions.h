
@interface TCSSuggestions : NSObject <IDSBatchIDQueryControllerDelegate, TCSContactsObserver> {
    CNContactStore * _contactStore;
    TCSContacts * _contacts;
    NSObject<OS_dispatch_queue> * _coreRecentsQueue;
    NSUserDefaults * _defaults;
    int  _firstUnlockToken;
    NSObject<OS_dispatch_queue> * _generationQueue;
    bool  _generationTimerEnabled;
    int  _npsInitialSyncToken;
    NPSManager * _npsManager;
    NSHashTable * _observers;
    IDSBatchIDQueryController * _queryController;
    bool  _shouldObserveSuggestionsDefaultChanges;
    NSMutableDictionary * _suggestedDestinationToStatus;
    NSArray * _suggestedDestinations;
    NSTimer * _suggestionGenerationTimer;
    NSMutableDictionary * _suggestions;
    CNCoalescingTimer * _suggestionsSaveTimer;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) TCSContacts *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool generationTimerEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldObserveSuggestionsDefaultChanges;
@property (nonatomic, retain) NSArray *suggestedDestinations;
@property (nonatomic, retain) NSMutableDictionary *suggestions;
@property (readonly) Class superclass;

+ (id)_descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)_addSuggestedDestination:(id)arg1 withTimestamp:(id)arg2;
- (void)_deleteSuggestions;
- (id)_destinationsFromCallHistory;
- (id)_destinationsFromCoreRecents;
- (id)_destinationsFromFavorites;
- (void)_deviceDidPair:(id)arg1;
- (void)_generateNewSuggestions;
- (void)_handleDeviceFirstUnlock;
- (void)_invalidate;
- (void)_notifyObserversSuggestionsChanged;
- (id)_performHousekeepingOnSuggestions:(id)arg1;
- (void)_performIDQueryForSuggestions:(id)arg1;
- (void)_saveSuggestions;
- (bool)_shouldGenerateNewSuggestions;
- (void)_startGenerationTimerWithFireDate:(id)arg1;
- (void)_stopGenerationTimer;
- (void)_syncSuggestions;
- (void)_updateGenerationTimestamps;
- (void)addObserver:(id)arg1;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (id)contactStore;
- (id)contacts;
- (void)dealloc;
- (id)defaults;
- (void)destinationsDidChange:(id)arg1;
- (void)generateNewSuggestionsIfNecessary;
- (bool)generationTimerEnabled;
- (id)initWithContactStore:(id)arg1 contacts:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setGenerationTimerEnabled:(bool)arg1;
- (void)setShouldObserveSuggestionsDefaultChanges:(bool)arg1;
- (void)setSuggestedDestinations:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (bool)shouldObserveSuggestionsDefaultChanges;
- (id)suggestedDestinations;
- (id)suggestions;

@end
