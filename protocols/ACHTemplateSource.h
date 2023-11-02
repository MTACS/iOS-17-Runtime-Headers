
@protocol ACHTemplateSource <NSObject>

@required

- (NSString *)identifier;
- (NSURL *)localizationBundleURLForTemplate:(ACHTemplate *)arg1;
- (NSURL *)propertyListBundleURLForTemplate:(ACHTemplate *)arg1;
- (NSURL *)resourceBundleURLForTemplate:(ACHTemplate *)arg1;
- (long long)runCadence;
- (bool)sourceShouldRunForDate:(NSDate *)arg1;
- (NSURL *)stickerBundleURLForTemplate:(ACHTemplate *)arg1;
- (void)templatesForDate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSSet *, NSError *, void*

@optional

- (NSDictionary *)customPlaceholderValuesForTemplate:(ACHTemplate *)arg1 error:(id*)arg2;
- (NSObject<ACHTemplateSourceDelegate> *)delegate;
- (long long)mobileAssetVersionForTemplate:(ACHTemplate *)arg1;
- (void)setDelegate:(NSObject<ACHTemplateSourceDelegate> *)arg1;
- (void)templatesForDate:(void *)arg1 databaseContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSDate *, HDDatabaseTransactionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSSet *, NSError *, void*

@end
