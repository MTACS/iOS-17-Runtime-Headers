
@interface MPCSharedListeningPlaybackIntentDataSource : NSObject <ICLiveLinkDelegate, MPCPlaybackIntentDataSource> {
    long long  _buildState;
    id /* block */  _completion;
    MSVBlockGuard * _guard;
    ICLiveLinkIdentity * _identity;
    MPCPlaybackIntent * _initialIntent;
    MSVSectionedCollection * _initialTracklist;
    long long  _linkState;
    ICLiveLink * _liveLink;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _shuffleMode;
    long long  _sourceState;
    NSIndexPath * _startIndexPath;
    id  _strongSelf;
}

@property (nonatomic) long long buildState;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MSVBlockGuard *guard;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICLiveLinkIdentity *identity;
@property (nonatomic, retain) MPCPlaybackIntent *initialIntent;
@property (nonatomic, retain) MSVSectionedCollection *initialTracklist;
@property (nonatomic) long long linkState;
@property (nonatomic, retain) ICLiveLink *liveLink;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic) long long shuffleMode;
@property (nonatomic) long long sourceState;
@property (nonatomic, copy) NSIndexPath *startIndexPath;
@property (nonatomic, retain) id strongSelf;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_transitionToBuildState:(long long)arg1;
- (void)_transitionToBuildState:(long long)arg1 intent:(id)arg2 error:(id)arg3;
- (void)_transitionToLiveLinkState:(long long)arg1;
- (void)_transitionToLiveLinkState:(long long)arg1 error:(id)arg2;
- (void)_transitionToSourceState:(long long)arg1;
- (void)_transitionToSourceState:(long long)arg1 error:(id)arg2;
- (void)buildSharedSessionIntentWithIntent:(id)arg1 identity:(id)arg2 completion:(id /* block */)arg3;
- (long long)buildState;
- (id /* block */)completion;
- (void)didStartLiveLink:(id)arg1;
- (void)getRemotePlaybackQueueFromIntent:(id)arg1 destination:(long long)arg2 completion:(id /* block */)arg3;
- (void)getRepresentativeObjectFromIntent:(id)arg1 properties:(id)arg2 completion:(id /* block */)arg3;
- (id)guard;
- (id)identity;
- (id)initialIntent;
- (id)initialTracklist;
- (long long)linkState;
- (id)liveLink;
- (void)liveLink:(id)arg1 didEncounterError:(id)arg2 willRetry:(bool)arg3;
- (void)liveLink:(id)arg1 didUpdateQueue:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)setBuildState:(long long)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setGuard:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setInitialIntent:(id)arg1;
- (void)setInitialTracklist:(id)arg1;
- (void)setLinkState:(long long)arg1;
- (void)setLiveLink:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setShuffleMode:(long long)arg1;
- (void)setSourceState:(long long)arg1;
- (void)setStartIndexPath:(id)arg1;
- (void)setStrongSelf:(id)arg1;
- (long long)shuffleMode;
- (long long)sourceState;
- (id)startIndexPath;
- (id)strongSelf;

@end
