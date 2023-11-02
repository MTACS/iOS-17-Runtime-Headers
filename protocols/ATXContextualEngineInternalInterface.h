
@protocol ATXContextualEngineInternalInterface

@required

- (void)fetchAllSnapshotsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchSnapshotOverrideWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXContextualSuggestionSnapshot *, NSError *, void*
- (void)overrideWithSnapshot:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ATXContextualSuggestionSnapshot *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
