
@interface MapsSuggestionsRoutineRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {
    NSDate * _fetchEntriesFromDate;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
    MapsSuggestionsRoutine * _routine;
    NSArray * _routineLocations;
    NSArray * _routineVisits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithRoutine:(id)arg1;
- (void)preLoad;
- (BOOL)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(id /* block */)arg4;
- (id)uniqueName;

@end
