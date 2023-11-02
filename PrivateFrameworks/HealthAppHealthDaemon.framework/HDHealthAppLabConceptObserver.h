
@interface HDHealthAppLabConceptObserver : NSObject <HDUserDomainConceptObserver> {
    NSObject<OS_dispatch_queue> * _debounceQueue;
    _HKDelayedOperation * _delayedOperation;
    HDHAHealthPluginHostFeedGenerator * _feedGenerator;
    HDProfile * _profile;
    HDUserDomainConceptManager * _userDomainConceptManager;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *debounceQueue;
@property (nonatomic, retain) _HKDelayedOperation *delayedOperation;
@property (nonatomic, retain) HDHAHealthPluginHostFeedGenerator *feedGenerator;
@property (nonatomic, retain) HDProfile *profile;
@property (nonatomic, retain) HDUserDomainConceptManager *userDomainConceptManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debounceQueue;
- (void)debounceRunBackgroundGenerationForNewUserDomainConcepts;
- (id)delayedOperation;
- (id)feedGenerator;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 debounceTime:(double)arg2;
- (id)profile;
- (void)runBackgroundGenerationForNewUserDomainConcepts;
- (void)setDebounceQueue:(id)arg1;
- (void)setDelayedOperation:(id)arg1;
- (void)setFeedGenerator:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setUserDomainConceptManager:(id)arg1;
- (id)userDomainConceptManager;
- (void)userDomainConceptManager:(id)arg1 didAddUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didDeleteUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didJournalUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didUpdateUserDomainConcepts:(id)arg2;

@end
