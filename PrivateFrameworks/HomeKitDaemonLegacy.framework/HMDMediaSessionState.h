
@interface HMDMediaSessionState : HMFObject <HMFDumpState> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _mediaUniqueIdentifier;
    NSNumber * _muted;
    long long  _playbackState;
    long long  _repeatState;
    NSString * _sessionIdentifier;
    long long  _shuffleState;
    NSNumber * _volume;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSString *mediaUniqueIdentifier;
@property (copy) NSNumber *muted;
@property (nonatomic) long long playbackState;
@property (nonatomic) long long repeatState;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (nonatomic) long long shuffleState;
@property (readonly) Class superclass;
@property (copy) NSNumber *volume;

- (void).cxx_destruct;
- (id)description;
- (id)dumpState;
- (unsigned long long)hash;
- (id)initWithSessionIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mediaUniqueIdentifier;
- (id)muted;
- (long long)playbackState;
- (long long)repeatState;
- (id)sessionIdentifier;
- (void)setMediaUniqueIdentifier:(id)arg1;
- (void)setMuted:(id)arg1;
- (void)setPlaybackState:(long long)arg1;
- (void)setRepeatState:(long long)arg1;
- (void)setShuffleState:(long long)arg1;
- (void)setVolume:(id)arg1;
- (long long)shuffleState;
- (id)volume;

@end
