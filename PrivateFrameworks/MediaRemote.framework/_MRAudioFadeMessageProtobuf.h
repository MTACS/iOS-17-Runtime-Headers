
@interface _MRAudioFadeMessageProtobuf : PBCodable <NSCopying> {
    int  _fadeType;
    struct { 
        unsigned int fadeType : 1; 
    }  _has;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
}

@property (nonatomic) int fadeType;
@property (nonatomic) bool hasFadeType;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void).cxx_destruct;
- (int)StringAsFadeType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fadeType;
- (id)fadeTypeAsString:(int)arg1;
- (bool)hasFadeType;
- (bool)hasPlayerPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (void)setFadeType:(int)arg1;
- (void)setHasFadeType:(bool)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
