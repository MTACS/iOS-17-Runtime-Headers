
@protocol PLSyndicationDeleteManagerDelegate <NSObject>

@required

- (void)performTransactionForSyndicationDeleteManager:(void *)arg1 name:(void *)arg2 transaction:(void *)arg3; // needs 3 arg types, found 8: PLSyndicationDeleteManager *, const char *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSManagedObjectContext *, void*
- (long long)wellKnownPhotoLibraryIdentifier;

@end
