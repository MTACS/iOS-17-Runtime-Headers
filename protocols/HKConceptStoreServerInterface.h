
@protocol HKConceptStoreServerInterface <NSObject>

@required

- (void)remote_currentIndexingState:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)remote_queryConceptByIdentifier:(void *)arg1 loadRelationships:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKConceptIdentifier *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKConcept *, NSError *, void*
- (void)remote_queryCountOfConceptsAssociatedToUserRecordsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remote_queryRelationshipsForNodeWithID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKConceptIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_startObservingConceptIndexManagerWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
