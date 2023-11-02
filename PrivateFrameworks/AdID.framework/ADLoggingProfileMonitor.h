
@interface ADLoggingProfileMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _initQueue;
    NSSet * _profileIdentifiers;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *initQueue;
@property (nonatomic, retain) NSSet *profileIdentifiers;

- (void).cxx_destruct;
- (void)_beginMonitoring;
- (void)_fetchInstalledProfilesAndListen;
- (bool)_hasRelevantProfileChanged:(id)arg1;
- (void)_profilesChanged:(id)arg1;
- (id)fetchInstalledProfileIdentifiers;
- (id)init;
- (id)initQueue;
- (id)profileIdentifiers;
- (void)setInitQueue:(id)arg1;
- (void)setProfileIdentifiers:(id)arg1;

@end
