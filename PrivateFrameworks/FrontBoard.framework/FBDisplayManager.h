
@interface FBDisplayManager : FBSDisplayMonitor <SBFBDisplayManagerTransformUpdating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FBSDisplayConfiguration *mainDisplay;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

+ (id)mainConfiguration;
+ (id)mainDisplay;
+ (id)mainIdentity;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)mainDisplay;
- (void)postBookendConnections;
- (void)updateTransformsWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)sb_secureMainConfiguration;
+ (id)sb_secureMainIdentity;

@end
