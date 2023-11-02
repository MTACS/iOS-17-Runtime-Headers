
@interface MapsSuggestionsUser : NSObject <MapsSuggestionsObject> {
    <MapsSuggestionsMeCardReader> * _meCardReader;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
    MapsSuggestionsRoutine * _routine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)hasVisitedMapItem:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithMeCardReader:(id)arg1 routine:(id)arg2;
- (BOOL)meCardForProminentPlacesAroundCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 maxDistance:(double)arg2 maxAge:(double)arg3 minVisits:(long long)arg4 handler:(id /* block */)arg5;
- (BOOL)mostRecentVisitWithinDistance:(double)arg1 ofMapItem:(id)arg2 handler:(id /* block */)arg3;
- (id)uniqueName;

@end
