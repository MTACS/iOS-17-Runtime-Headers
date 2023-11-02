
@protocol PRPosterExtensionProvider <BSInvalidatable, BSCancellable>

@required

- (void)addObserver:(id <PRPosterExtensionProviderObserver>)arg1;
- (NSDictionary *)defaultInstanceByProvider;
- (<PRPosterExtensionDescribing> *)defaultInstanceOfProvider:(NSString *)arg1 error:(out id*)arg2;
- (<PRPosterExtensionDescribing> *)instantiateNewInstanceOfProvider:(NSString *)arg1 error:(out id*)arg2;
- (NSArray *)knownPosterExtensions;
- (NSPredicate *)predicate;
- (void)removeObserver:(id <PRPosterExtensionProviderObserver>)arg1;
- (void)setPredicate:(NSPredicate *)arg1;
- (void)setSupportedRoles:(NSSet *)arg1;
- (void)start;
- (NSSet *)supportedRoles;
- (void)teardownRunningExtensions;

@end
