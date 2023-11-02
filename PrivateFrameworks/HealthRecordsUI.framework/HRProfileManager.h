
@interface HRProfileManager : NSObject {
    void currentProfile;
    void lock;
    void profileCache;
    void profileObjectsCache;
}

@property (nonatomic, retain) HRProfile *currentProfile;
@property (nonatomic, readonly) HRProfile *primaryProfile;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)currentProfile;
- (id)init;
- (id)primaryProfile;
- (id)profileWithHealthStore:(id)arg1;
- (id)profileWithProfileIdentifier:(id)arg1;
- (void)setCurrentProfile:(id)arg1;
- (void)switchCurrentProfileWithIdentifier:(id)arg1;

@end
