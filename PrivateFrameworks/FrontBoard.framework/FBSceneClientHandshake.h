
@interface FBSceneClientHandshake : NSObject {
    _FBSceneClientProcess * _process;
    NSSet * _remnants;
}

@property (nonatomic, readonly) RBSProcessHandle *handle;
@property (nonatomic, readonly) <FBSceneClientProcess> *process;
@property (nonatomic, readonly, copy) NSSet *remnants;

- (void).cxx_destruct;
- (id)_initWithHandle:(id)arg1 remnants:(id)arg2;
- (id)description;
- (id)handle;
- (id)init;
- (id)process;
- (id)remnants;

@end
