
@protocol RMConfigurationMultipleAdapter <RMConfigurationAdapter>

@required

- (bool)applyConfiguration:(RMSubscribedConfigurationReference *)arg1 scope:(long long)arg2 returningReasons:(id*)arg3 error:(id*)arg4;
- (NSArray *)configurationClasses;
- (RMStoreDeclarationKey *)declarationKeyForConfiguration:(RMSubscribedConfigurationReference *)arg1;
- (bool)removeDeclarationKey:(RMStoreDeclarationKey *)arg1 scope:(long long)arg2 error:(id*)arg3;

@optional

- (NSSet *)allDeclarationKeys;
- (NSSet *)allDeclarationKeysForScope:(long long)arg1 error:(id*)arg2;
- (void)configurationUIForConfiguration:(void *)arg1 scope:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: RMSubscribedConfigurationReference *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, RMConfigurationUIDetails *, NSError *, void*

@end
