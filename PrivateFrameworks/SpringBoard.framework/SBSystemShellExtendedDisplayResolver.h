
@interface SBSystemShellExtendedDisplayResolver : NSObject <SBWindowingModeResolver> {
    <SBDisplayWindowingModeResolverDelegate> * _delegate;
    FBSDisplayIdentity * _rootDisplayIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBDisplayWindowingModeResolverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayWindowingMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isWindowingModeAvailable;
@property (nonatomic, readonly) FBSDisplayIdentity *rootDisplayIdentity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (long long)displayWindowingMode;
- (id)initWithRootDisplay:(id)arg1;
- (bool)isWindowingModeAvailable;
- (id)rootDisplayIdentity;
- (void)setDelegate:(id)arg1;

@end
