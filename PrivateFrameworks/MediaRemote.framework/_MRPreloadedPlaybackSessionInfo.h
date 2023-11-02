
@interface _MRPreloadedPlaybackSessionInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int playbackSessionPriority : 1; 
    }  _has;
    NSString * _playbackSessionIdentifier;
    int  _playbackSessionPriority;
    NSString * _playbackSessionRevision;
}

@property (nonatomic, readonly) bool hasPlaybackSessionIdentifier;
@property (nonatomic) bool hasPlaybackSessionPriority;
@property (nonatomic, readonly) bool hasPlaybackSessionRevision;
@property (nonatomic, retain) NSString *playbackSessionIdentifier;
@property (nonatomic) int playbackSessionPriority;
@property (nonatomic, retain) NSString *playbackSessionRevision;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaybackSessionIdentifier;
- (bool)hasPlaybackSessionPriority;
- (bool)hasPlaybackSessionRevision;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playbackSessionIdentifier;
- (int)playbackSessionPriority;
- (id)playbackSessionRevision;
- (bool)readFrom:(id)arg1;
- (void)setHasPlaybackSessionPriority:(bool)arg1;
- (void)setPlaybackSessionIdentifier:(id)arg1;
- (void)setPlaybackSessionPriority:(int)arg1;
- (void)setPlaybackSessionRevision:(id)arg1;
- (void)writeTo:(id)arg1;

@end
