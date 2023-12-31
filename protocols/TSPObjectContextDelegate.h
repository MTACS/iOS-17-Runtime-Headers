
@protocol TSPObjectContextDelegate <TSPSupportDirectoryDelegate>

@optional

- (void)addPersistenceWarnings:(NSSet *)arg1;
- (NSDictionary *)additionalDocumentPropertiesForWrite;
- (bool)areExternalReferencesToDataAllowedAtURL:(NSURL *)arg1;
- (bool)areNewExternalReferencesToDataAllowed;
- (void)context:(TSPObjectContext *)arg1 didDownloadDocumentResources:(NSArray *)arg2 failedOrCancelledDocumentResources:(NSArray *)arg3 error:(NSError *)arg4;
- (void)decryptedDocumentWithKey:(SFUCryptoKey *)arg1;
- (<NSFilePresenter> *)filePresenter;
- (bool)ignoreDocumentSupport;
- (bool)isDocumentSupportTemporary;
- (void)makeDocumentReadOnly;
- (NSDictionary *)packageDataForWrite;
- (NSSet *)persistenceWarningsForData:(TSPData *)arg1 isReadable:(bool)arg2 isExternal:(bool)arg3;
- (void)presentPersistenceError:(NSError *)arg1;
- (bool)retrievePassphraseWithConsumer:(id <TSPPassphraseConsumer>)arg1;

@end
