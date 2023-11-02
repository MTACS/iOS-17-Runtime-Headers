
@interface _AFMediaPlaybackStateSnapshotMutation : NSObject <AFMediaPlaybackStateSnapshotMutating> {
    AFMediaPlaybackStateSnapshot * _base;
    NSString * _groupIdentifier;
    bool  _isProxyGroupPlayer;
    NSString * _mediaType;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasPlaybackState : 1; 
        unsigned int hasNowPlayingTimestamp : 1; 
        unsigned int hasMediaType : 1; 
        unsigned int hasGroupIdentifier : 1; 
        unsigned int hasIsProxyGroupPlayer : 1; 
    }  _mutationFlags;
    NSDate * _nowPlayingTimestamp;
    long long  _playbackState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getGroupIdentifier;
- (bool)getIsProxyGroupPlayer;
- (id)getMediaType;
- (id)getNowPlayingTimestamp;
- (long long)getPlaybackState;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setGroupIdentifier:(id)arg1;
- (void)setIsProxyGroupPlayer:(bool)arg1;
- (void)setMediaType:(id)arg1;
- (void)setNowPlayingTimestamp:(id)arg1;
- (void)setPlaybackState:(long long)arg1;

@end
