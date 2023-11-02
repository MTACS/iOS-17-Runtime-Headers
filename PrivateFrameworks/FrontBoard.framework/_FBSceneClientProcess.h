
@interface _FBSceneClientProcess : NSObject <FBSceneClientProcess> {
    RBSProcessHandle * _handle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) RBSProcessHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithHandle:(id)arg1;
- (id)description;
- (id)handle;

@end
