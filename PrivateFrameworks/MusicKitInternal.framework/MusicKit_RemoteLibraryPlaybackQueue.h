
@interface MusicKit_RemoteLibraryPlaybackQueue : NSObject {
    MPModelLibraryRequest * _libraryRequest;
    MPMediaQuery * _mediaQuery;
    MPModelObject * _underlyingStartObject;
}

- (void).cxx_destruct;
- (void)_insertQueueWithPath:(id)arg1 position:(long long)arg2 sessionID:(id)arg3 completionHandler:(id /* block */)arg4;
- (long long)_persistentIDForStartItem;
- (void)_resolveMediaQueryForLibraryRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setQueueWithPath:(id)arg1 shuffleMode:(long long)arg2 sessionID:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithContainer:(id)arg1 startItem:(id)arg2;
- (id)initWithItem:(id)arg1;
- (id)initWithRequest:(id)arg1 startItem:(id)arg2;
- (void)insertQueueWithPath:(id)arg1 position:(long long)arg2 sessionID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setQueueWithPath:(id)arg1 shuffleMode:(long long)arg2 sessionID:(id)arg3 completionHandler:(id /* block */)arg4;

@end
