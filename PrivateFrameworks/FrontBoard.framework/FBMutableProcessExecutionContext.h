
@interface FBMutableProcessExecutionContext : FBProcessExecutionContext

@property (nonatomic, copy) NSArray *arguments;
@property (nonatomic) bool checkForLeaks;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) bool disableASLR;
@property (nonatomic, copy) NSDictionary *environment;
@property (nonatomic, copy) RBSProcessIdentity *identity;
@property (nonatomic) long long launchIntent;
@property (nonatomic, copy) NSString *overrideExecutablePath;
@property (nonatomic, retain) FBProcessExecutableSlice *overrideExecutableSlice;
@property (nonatomic, retain) NSURL *standardErrorURL;
@property (nonatomic, retain) NSURL *standardOutputURL;
@property (nonatomic) bool waitForDebugger;
@property (nonatomic, retain) <FBProcessWatchdogProviding> *watchdogProvider;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
