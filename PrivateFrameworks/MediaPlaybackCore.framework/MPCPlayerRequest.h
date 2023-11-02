
@interface MPCPlayerRequest : MPRequest <MPCMediaRemoteMiddlewareMetadataOperationConfiguration> {
    bool  _disablePlaybackRateValidation;
    bool  _disablePlaybackStateValidation;
    MPCPlayerPath * _playerPath;
    MPPropertySet * _playingItemProperties;
    NSString * _preferredFallbackItemRelationship;
    MPPropertySet * _queueItemProperties;
    MPPropertySet * _queueSectionProperties;
    struct { 
        long long reverseCount; 
        long long forwardCount; 
    }  _tracklistRange;
    ICUserIdentity * _userIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disablePlaybackRateValidation;
@property (nonatomic) bool disablePlaybackStateValidation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPCPlayerPath *playerPath;
@property (nonatomic, copy) MPPropertySet *playingItemProperties;
@property (nonatomic, copy) NSString *preferredFallbackItemRelationship;
@property (nonatomic, copy) MPPropertySet *queueItemProperties;
@property (nonatomic, copy) MPPropertySet *queueSectionProperties;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; long long x2; } tracklistRange;
@property (nonatomic, retain) ICUserIdentity *userIdentity;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)_stateDumpObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)disablePlaybackRateValidation;
- (bool)disablePlaybackStateValidation;
- (id)init;
- (id)middlewareClasses;
- (id)playerPath;
- (id)playingItemProperties;
- (id)preferredFallbackItemRelationship;
- (id)queueItemProperties;
- (id)queueSectionProperties;
- (void)setDisablePlaybackRateValidation:(bool)arg1;
- (void)setDisablePlaybackStateValidation:(bool)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setPlayingItemProperties:(id)arg1;
- (void)setPreferredFallbackItemRelationship:(id)arg1;
- (void)setQueueItemProperties:(id)arg1;
- (void)setQueueSectionProperties:(id)arg1;
- (void)setTracklistRange:(struct { long long x1; long long x2; })arg1;
- (void)setUserIdentity:(id)arg1;
- (struct { long long x1; long long x2; })tracklistRange;
- (id)userIdentity;

@end
