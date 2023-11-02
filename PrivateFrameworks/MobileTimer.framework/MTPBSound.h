
@interface MTPBSound : PBCodable <NSCopying> {
    struct { 
        unsigned int mediaID : 1; 
        unsigned int soundVolume : 1; 
    }  _has;
    double  _mediaID;
    unsigned int  _soundType;
    float  _soundVolume;
    NSString * _toneID;
    NSString * _vibeID;
}

@property (nonatomic) bool hasMediaID;
@property (nonatomic) bool hasSoundVolume;
@property (nonatomic, readonly) bool hasToneID;
@property (nonatomic, readonly) bool hasVibeID;
@property (nonatomic) double mediaID;
@property (nonatomic) unsigned int soundType;
@property (nonatomic) float soundVolume;
@property (nonatomic, retain) NSString *toneID;
@property (nonatomic, retain) NSString *vibeID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMediaID;
- (bool)hasSoundVolume;
- (bool)hasToneID;
- (bool)hasVibeID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)mediaID;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMediaID:(bool)arg1;
- (void)setHasSoundVolume:(bool)arg1;
- (void)setMediaID:(double)arg1;
- (void)setSoundType:(unsigned int)arg1;
- (void)setSoundVolume:(float)arg1;
- (void)setToneID:(id)arg1;
- (void)setVibeID:(id)arg1;
- (unsigned int)soundType;
- (float)soundVolume;
- (id)toneID;
- (id)vibeID;
- (void)writeTo:(id)arg1;

@end
