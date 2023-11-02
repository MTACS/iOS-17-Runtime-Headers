
@interface SBBootDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) NSDictionary *bootTransitionContext;
@property (nonatomic, readonly) bool dontLockAfterCrash;
@property (nonatomic) bool hasCompletedSynchronizingCloudCriticalData;
@property (nonatomic, retain) NSData *lastActiveHomePoster;
@property (nonatomic, retain) NSData *lastActiveLockPoster;
@property (nonatomic, retain) NSString *lastRestoreIdentifier;
@property (nonatomic, retain) NSString *lastSystemBuildVersion;
@property (nonatomic, readonly) bool recordBootTimeTillDidFinishLaunching;

- (void)_bindAndRegisterDefaults;

@end
