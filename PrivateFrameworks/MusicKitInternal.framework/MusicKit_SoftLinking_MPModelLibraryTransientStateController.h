
@interface MusicKit_SoftLinking_MPModelLibraryTransientStateController : NSObject {
    MPModelLibraryTransientStateController * _underlyingLibraryTransientStateController;
}

+ (id)didChangeNotificationName;
+ (id)sharedLibraryTransientStateController;

- (void).cxx_destruct;
- (void)_handleLibraryTransientStateControllerDidChangeNotification:(id)arg1;
- (id)_initWithUnderlyingLibraryTransientStateController:(id)arg1;
- (long long)_libraryTransientFavoriteState:(long long)arg1;
- (long long)_underlyingLibraryTransientFavoriteState:(long long)arg1;
- (void)dealloc;
- (void)performAddToPlaylistWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performDeleteEntityWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performFavoriteStateChangeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performLibraryImportChangeWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performLibraryKeepLocalChangeWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performOperation:(id)arg1;
- (long long)transientFavoriteStateForModelObject:(id)arg1;

@end
