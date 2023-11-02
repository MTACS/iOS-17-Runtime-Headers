
@interface SBDefaultIconModelStore : SBIconModelPropertyListFileStore

+ (id)sharedInstance;

- (void)_deleteLegacyState;
- (bool)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (id)init;
- (id)loadCurrentIconState:(id*)arg1;
- (id)loadDesiredIconState:(id*)arg1;
- (bool)saveDesiredIconState:(id)arg1 error:(id*)arg2;

@end
