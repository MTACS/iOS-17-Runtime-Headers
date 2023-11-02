
@protocol RMStoreProtocol

@required

- (NSString *)accountIdentifier;
- (bool)dataSeparated;
- (void)declarationManifestWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RMDeclarationManifest *, NSError *, void*
- (void)declarationWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RMModelDeclarationBase *, NSError *, void*
- (void)declarationsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)declarationsWithTypes:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (bool)defaultToInteractive;
- (NSURL *)enrollmentURL;
- (void)fetchDataAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (NSString *)identifier;
- (bool)isValidDeclaration:(RMModelDeclarationBase *)arg1;
- (NSDictionary *)metadataReturningError:(id*)arg1;
- (id)metadataValueForKey:(NSString *)arg1 error:(id*)arg2;
- (NSString *)name;
- (NSString *)personaIdentifier;
- (long long)scope;
- (void)setShouldInstallConfiguration:(void *)arg1 shouldInstall:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: RMModelDeclarationBase *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSString *)storeDescription;
- (long long)type;

@end
