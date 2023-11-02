
@interface _UIKeyboardArbiterHost : NSObject <_UIKeyboardArbiterLink> {
    NSObject<OS_dispatch_queue> * _queue;
    FBSScene * _scene;
    _UIKeyboardArbiter * owner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAvailable;
@property (nonatomic) _UIKeyboardArbiter *owner;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;

+ (void)launch;
+ (id)launchAdvisorWithOmniscientDelegate:(id)arg1;
+ (id)launchAdvisorWithOmniscientDelegate:(id)arg1 sceneDelegate:(id)arg2;

- (void).cxx_destruct;
- (id)_createSceneWithIdentifier:(id)arg1 initialClientSettings:(id)arg2;
- (void)attach:(id)arg1;
- (void)connectWithQueue:(id)arg1;
- (void)createSceneWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (void)detach:(id)arg1;
- (bool)isAvailable;
- (id)owner;
- (id)serviceName;
- (void)setOwner:(id)arg1;
- (void)updateSceneSettings;

@end
