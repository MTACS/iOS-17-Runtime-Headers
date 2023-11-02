
@protocol FBSSceneClientAgent <FBSSceneAgent>

@required

- (void)scene:(void *)arg1 didInitializeWithEvent:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: <FBSSceneHandle> *, FBSSceneEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)scene:(void *)arg1 handleEvent:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: <FBSSceneHandle> *, FBSSceneEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSSceneMessage *, void*
- (void)scene:(void *)arg1 willInvalidateWithEvent:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: <FBSSceneHandle> *, FBSSceneEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
