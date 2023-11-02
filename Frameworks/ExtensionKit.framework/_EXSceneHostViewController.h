
@interface _EXSceneHostViewController : UIViewController {
    _EXExtensionProcessHandle * _extensionProcess;
    NSString * _role;
    NSUUID * _sessionUUID;
}

@property (retain) _EXExtensionProcessHandle *extensionProcess;
@property (retain) NSString *role;
@property (retain) NSUUID *sessionUUID;

- (void).cxx_destruct;
- (id)extensionProcess;
- (id)initWithExtensionProcess:(id)arg1 sessionUUID:(id)arg2 role:(id)arg3;
- (void)loadView;
- (id)role;
- (id)sessionUUID;
- (void)setExtensionProcess:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setSessionUUID:(id)arg1;

@end
