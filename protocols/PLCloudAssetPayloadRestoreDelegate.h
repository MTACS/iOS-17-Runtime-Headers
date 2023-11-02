
@protocol PLCloudAssetPayloadRestoreDelegate

@required

- (NSManagedObjectContext *)managedObjectContext;
- (void)performTransactionAndWait:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSDictionary *)resolveLocalIdentifiersForCloudIdentifiers:(NSSet *)arg1 error:(id*)arg2;

@end
