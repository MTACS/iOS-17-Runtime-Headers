
@protocol PBFComplicationSnapshotProviding <BSInvalidatable>

@required

- (void)fetchComplicationSnapshotsForRequests:(void *)arg1 complicationSnapshotReceivedHandler:(void *)arg2 errorHandler:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 21: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PBFComplicationSnapshotRequest *, UIImage *, void*, id /* block */, void*, void, id /* block */, PBFComplicationSnapshotRequest *, NSError *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (NSMapTable *)preparedComplicationSnapshotsForRequests:(NSArray *)arg1;
- (void)trimCachedSnapshotsToRequests:(NSSet *)arg1;

@end
