
@interface NUImageCacheNode : NUCacheNode

- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (id)persistentURL;
- (bool)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2;

@end
