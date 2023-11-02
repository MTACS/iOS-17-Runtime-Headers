
@protocol SYDocumentWorkflowsServiceInterface <NSObject>

@required

- (void)fetchAttributesForDocumentsWithIndexKeys:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchUserActivityForDocumentIndexKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SYUserActivityWrapper *, NSError *, void*
- (void)hasLastModifiedDocument:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SYLastModifiedDocumentAttributes *, NSError *, void*
- (void)hasOriginalDocumentForFileAtURL:(void *)arg1 withAttributes:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSURL *, SYDocumentAttributes *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SYDocumentAttributes *, NSError *, void*
- (void)openLastModifiedDocument:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)returnToSenderDocument:(void *)arg1 withAttributes:(void *)arg2 shouldCreateNewMessage:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: SYDocument *, SYDocumentAttributes *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)saveUserActivity:(void *)arg1 forDocumentIndexKey:(void *)arg2 sourceBundleIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: SYUserActivityWrapper *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)unlinkDocumentsWithRelatedUniqueIdentifiers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateLinkedDocumentsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
