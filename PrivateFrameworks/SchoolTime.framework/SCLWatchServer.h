
@interface SCLWatchServer : NSObject {
    SCLSchoolModeManager * _schoolModeManager;
}

@property (nonatomic, readonly) SCLSchoolModeManager *schoolModeManager;

+ (id)sharedWatchServer;

- (void).cxx_destruct;
- (void)run;
- (id)schoolModeManager;

@end
