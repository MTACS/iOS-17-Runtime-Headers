
@interface MapsSuggestionsSuppressor : NSObject <MapsSuggestionsObject> {
    MapsSuggestionsQueue * _queue;
    NSMutableDictionary * _suppressionEntries;
    NSString * _suppressionEntriesFilePath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)awaitQueue;
- (id)init;
- (id)initWithFilePath:(id)arg1;
- (bool)isSuppressedEntry:(id)arg1;
- (bool)loadSuppressedEntries;
- (void)purge;
- (bool)saveSuppressedEntries;
- (bool)suppressEntry:(id)arg1 forTime:(double)arg2;
- (id)test_dateUntilSuppressedEntry:(id)arg1;
- (void)test_deleteSuppressedEntriesFile;
- (id)uniqueName;

@end
