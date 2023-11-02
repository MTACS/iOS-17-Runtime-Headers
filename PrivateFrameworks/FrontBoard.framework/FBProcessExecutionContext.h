
@interface FBProcessExecutionContext : NSObject <NSCopying, NSMutableCopying> {
    NSArray * _arguments;
    bool  _checkForLeaks;
    id /* block */  _completion;
    bool  _disableASLR;
    NSDictionary * _environment;
    bool  _forSceneActivation;
    RBSProcessIdentity * _identity;
    long long  _launchIntent;
    NSString * _overrideExecutablePath;
    FBProcessExecutableSlice * _overrideExecutableSlice;
    NSURL * _standardErrorURL;
    NSURL * _standardOutputURL;
    bool  _waitForDebugger;
    double  _watchdogExtension;
    <FBProcessWatchdogProviding> * _watchdogProvider;
}

@property (nonatomic, copy) NSArray *arguments;
@property (nonatomic) bool checkForLeaks;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) bool disableASLR;
@property (nonatomic, copy) NSDictionary *environment;
@property (nonatomic) bool forSceneActivation;
@property (nonatomic, copy) RBSProcessIdentity *identity;
@property (nonatomic) long long launchIntent;
@property (nonatomic, copy) NSString *overrideExecutablePath;
@property (nonatomic, retain) FBProcessExecutableSlice *overrideExecutableSlice;
@property (nonatomic, retain) NSURL *standardErrorURL;
@property (nonatomic, retain) NSURL *standardOutputURL;
@property (nonatomic) bool waitForDebugger;
@property (nonatomic) double watchdogExtension;
@property (nonatomic, retain) <FBProcessWatchdogProviding> *watchdogProvider;

- (void).cxx_destruct;
- (id)_initWithExecutionContext:(id)arg1;
- (id)arguments;
- (bool)checkForLeaks;
- (id /* block */)completion;
- (id)copyOrUpdateForSceneActivationWithSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disableASLR;
- (id)environment;
- (bool)forSceneActivation;
- (id)identity;
- (id)initWithIdentity:(id)arg1;
- (long long)launchIntent;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)overrideExecutablePath;
- (id)overrideExecutableSlice;
- (void)setArguments:(id)arg1;
- (void)setCheckForLeaks:(bool)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDisableASLR:(bool)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setForSceneActivation:(bool)arg1;
- (void)setIdentity:(id)arg1;
- (void)setLaunchIntent:(long long)arg1;
- (void)setOverrideExecutablePath:(id)arg1;
- (void)setOverrideExecutableSlice:(id)arg1;
- (void)setStandardErrorURL:(id)arg1;
- (void)setStandardOutputURL:(id)arg1;
- (void)setWaitForDebugger:(bool)arg1;
- (void)setWatchdogExtension:(double)arg1;
- (void)setWatchdogProvider:(id)arg1;
- (id)standardErrorURL;
- (id)standardOutputURL;
- (bool)waitForDebugger;
- (double)watchdogExtension;
- (id)watchdogProvider;

@end
