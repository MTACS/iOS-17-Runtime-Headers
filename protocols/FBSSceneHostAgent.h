
@protocol FBSSceneHostAgent <FBSSceneAgent>

@required

- (void)scene:(void *)arg1 didInitializeWithEvent:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: <FBSSceneHandle> *, FBSSceneEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)scene:(void *)arg1 willInvalidateWithEvent:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: <FBSSceneHandle> *, FBSSceneEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
