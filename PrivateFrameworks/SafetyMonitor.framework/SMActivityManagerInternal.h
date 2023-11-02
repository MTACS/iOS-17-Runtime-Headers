
@interface SMActivityManagerInternal : NSObject {
    void activities;
    void silentAudioFileName;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)endActivities;
- (id)init;
- (void)startActivity;
- (void)updateActivityWith:(id)arg1;

@end
