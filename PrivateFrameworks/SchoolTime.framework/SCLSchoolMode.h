
@interface SCLSchoolMode : NSObject <SCLSchoolModeXPCClientDelegate> {
    SCLSchoolModeConfiguration * _configuration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _resumeState;
    SCLSchoolModeXPCClient * _xpcClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property unsigned long long resumeState;
@property (nonatomic, readonly) SCLScheduleSettings *scheduleSettings;
@property (nonatomic, readonly) SCLState *state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assertQueueIfReady;
- (void)addUnlockHistoryItem:(id)arg1 completion:(id /* block */)arg2;
- (void)applyScheduleSettings:(id)arg1 completion:(id /* block */)arg2;
- (void)client:(id)arg1 didLoadScheduleSettings:(id)arg2;
- (void)client:(id)arg1 didUpdateScheduleSettings:(id)arg2;
- (void)client:(id)arg1 didUpdateToState:(id)arg2 fromState:(id)arg3;
- (void)clientDidChangeUnlockHistory:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteHistoryWithCompletion:(id /* block */)arg1;
- (void)dumpState;
- (void)fetchRecentUnlockHistoryItemsWithCompletion:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;
- (id)initWithIdentifier:(id)arg1 pairingID:(id)arg2 delegate:(id)arg3;
- (bool)isLoaded;
- (void)noteSignificantUserInteraction;
- (void)resume;
- (unsigned long long)resumeState;
- (id)scheduleSettings;
- (void)setActive:(bool)arg1 completion:(id /* block */)arg2;
- (void)setActive:(bool)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)setResumeState:(unsigned long long)arg1;
- (id)state;
- (void)triggerRemoteSync;

@end
