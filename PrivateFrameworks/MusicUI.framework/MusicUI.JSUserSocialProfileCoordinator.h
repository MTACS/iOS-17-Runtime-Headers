
@interface MusicUI.JSUserSocialProfileCoordinator : NSObject <_TtP7MusicUIP33_7FE1355BF44CECB8BC6467E452F3DC1237JSUserSocialProfileCoordinatorExports_> {
    void objectGraph;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pendingProfileFetch;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pendingProfileFetchResolution;
    void userSocialProfileCoordinator;
}

@property (nonatomic, readonly) JSValue *userProfile;

- (void).cxx_destruct;
- (id)fetchUserSocialProfile;
- (id)init;
- (id)userProfile;

@end
