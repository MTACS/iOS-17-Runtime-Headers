
@protocol FBSSceneAgentProxy <NSObject>

@required

- (void)agent:(void *)arg1 registerMessageHandler:(void *)arg2; // needs 2 arg types, found 13: <FBSSceneAgent> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSSceneMessage *, id /* block */, void*, void, id /* block */, FBSSceneMessage *, void*, void*
- (void)agent:(void *)arg1 sendMessage:(void *)arg2 withResponse:(void *)arg3; // needs 3 arg types, found 9: <FBSSceneAgent> *, FBSSceneMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSSceneMessage *, NSError *, void*

@end
