
@interface CNAutocompleteStoreQueryContext : NSObject {
    CNCache * _calendarServerReuseCache;
    CNCache * _directoryServerReuseCache;
}

@property (readonly) CNCache *calendarServerReuseCache;
@property (readonly) CNCache *directoryServerReuseCache;

+ (id)cacheBoundaryStrategies;

- (void).cxx_destruct;
- (id)calendarServerReuseCache;
- (id)directoryServerReuseCache;
- (id)init;

@end
