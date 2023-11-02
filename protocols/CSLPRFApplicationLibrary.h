
@protocol CSLPRFApplicationLibrary <NSObject>

@required

- (void)addObserver:(id <CSLPRFApplicationLibraryObserving>)arg1;
- (NSArray *)allApplications;
- (NSDictionary *)allApplicationsDictionary;
- (void)allApplicationsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (<CSLPRFApplication> *)applicationWithBundleIdentifier:(NSString *)arg1;
- (void)applicationWithBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CSLPRFApplication> *, void*
- (void)removeObserver:(id <CSLPRFApplicationLibraryObserving>)arg1;

@end
