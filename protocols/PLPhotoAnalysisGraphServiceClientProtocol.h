
@protocol PLPhotoAnalysisGraphServiceClientProtocol

@required

- (void)generateSuggestionsWithOptions:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(void *)arg1 options:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestCurationScoreByAssetUUIDForAssetUUIDs:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestEnergyStatusWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)requestGeoHashForAssetLocalIdentifiers:(void *)arg1 geoHashSize:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestGraphModelResultWithOptions:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestIconicSceneScoreForAssetLocalIdentifiers:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestSignalModelInfosWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestUpdateFeaturedContentBasedOnUserFeedbackWithPersonUUIDs:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSSet *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)runCurationWithItems:(void *)arg1 options:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSDictionary *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)runPerformanceTest:(void *)arg1 options:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
