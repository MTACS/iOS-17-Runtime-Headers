
@interface MapsSuggestionsPortraitRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {
    NSString * _currentCountryCode;
    NSLocale * _currentLocale;
    NSDate * _fetchEntriesFromDate;
    NSString * _languageCode;
    MapsSuggestionsPortrait * _portrait;
    NSArray * _portraitData;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPortrait:(id)arg1;
- (void)preLoad;
- (BOOL)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(id /* block */)arg4;
- (id)uniqueName;

@end
