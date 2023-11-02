
@interface HMPBMediaPlaybackAction : PBCodable <NSCopying> {
    NSData * _actionUUID;
    struct { 
        unsigned int mediaPlaybackState : 1; 
    }  _has;
    int  _mediaPlaybackState;
    NSMutableArray * _mediaProfiles;
    NSData * _playbackArchive;
    NSData * _volume;
}

@property (nonatomic, retain) NSData *actionUUID;
@property (nonatomic, readonly) bool hasActionUUID;
@property (nonatomic) bool hasMediaPlaybackState;
@property (nonatomic, readonly) bool hasPlaybackArchive;
@property (nonatomic, readonly) bool hasVolume;
@property (nonatomic) int mediaPlaybackState;
@property (nonatomic, retain) NSMutableArray *mediaProfiles;
@property (nonatomic, retain) NSData *playbackArchive;
@property (nonatomic, retain) NSData *volume;

+ (Class)mediaProfilesType;

- (void).cxx_destruct;
- (id)actionUUID;
- (void)addMediaProfiles:(id)arg1;
- (void)clearMediaProfiles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionUUID;
- (bool)hasMediaPlaybackState;
- (bool)hasPlaybackArchive;
- (bool)hasVolume;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)mediaPlaybackState;
- (id)mediaProfiles;
- (id)mediaProfilesAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaProfilesCount;
- (void)mergeFrom:(id)arg1;
- (id)playbackArchive;
- (bool)readFrom:(id)arg1;
- (void)setActionUUID:(id)arg1;
- (void)setHasMediaPlaybackState:(bool)arg1;
- (void)setMediaPlaybackState:(int)arg1;
- (void)setMediaProfiles:(id)arg1;
- (void)setPlaybackArchive:(id)arg1;
- (void)setVolume:(id)arg1;
- (id)volume;
- (void)writeTo:(id)arg1;

@end
