
@interface FBSBasicSceneClientAgent : FBSBasicSceneAgent <FBSSceneClientAgent>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)scene:(id)arg1 didInitializeWithEvent:(id)arg2 completion:(id /* block */)arg3;
- (void)scene:(id)arg1 handleEvent:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)scene:(id)arg1 willInvalidateWithEvent:(id)arg2 completion:(id /* block */)arg3;

@end
