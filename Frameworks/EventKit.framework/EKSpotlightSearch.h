
@interface EKSpotlightSearch : NSObject {
    EKEventStore * _eventStore;
    CSSearchQuery * csQuery;
}

@property EKEventStore *eventStore;

+ (id)_queryStringForPeopleMatchingSearchTerm:(id)arg1;
+ (id)queryStringForSearchTerm:(id)arg1 matchingTypes:(unsigned long long)arg2;
+ (id)queryStringForSearchTerm:(id)arg1 matchingTypes:(unsigned long long)arg2 fromStartDate:(id)arg3 toEndDate:(id)arg4;
+ (id)searchWithCSQuery:(id)arg1 inStore:(id)arg2 inCalendars:(id)arg3 resultHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)cancel;
- (id)eventStore;
- (id)initWithSearchWithCSQuery:(id)arg1 inStore:(id)arg2 inCalendars:(id)arg3 resultHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)query;
- (void)setEventStore:(id)arg1;
- (void)start;

@end
