
@protocol MapsSuggestionsPortraitConnector <NSObject>

@required

- (void)connectionsStore_registerFeedback:(void *)arg1 clientIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PPFeedback *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)iterRankedLocationsWithQuery:(void *)arg1 error:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 9: PPLocationQuery *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PPScoredLocation *, bool*, void*
- (bool)iterRecentLocationsForConsumer:(void *)arg1 criteria:(void *)arg2 limit:(void *)arg3 client:(void *)arg4 error:(void *)arg5 block:(void *)arg6; // needs 6 arg types, found 12: unsigned long long, PPConnectionsCriteria *, unsigned long long, NSString *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PPConnectionsLocation *, bool*, void*
- (bool)iterScoredEventsWithQuery:(void *)arg1 error:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 9: PPTripEventQuery *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PPScoredEvent *, bool*, void*
- (PPLocationQuery *)locationQuery:(unsigned long long)arg1 fromDate:(NSDate *)arg2 consumerType:(unsigned long long)arg3;
- (void)locationStore_registerFeedback:(void *)arg1 clientIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PPFeedback *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (PPNamedEntityQuery *)namedEntityQuery:(unsigned long long)arg1 fromDate:(NSDate *)arg2 consumerType:(unsigned long long)arg3;
- (void)namedEntityStore_registerFeedback:(void *)arg1 clientIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PPFeedback *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSArray *)rankedNamedEntitiesWihQuery:(PPNamedEntityQuery *)arg1 error:(id*)arg2;

@end
