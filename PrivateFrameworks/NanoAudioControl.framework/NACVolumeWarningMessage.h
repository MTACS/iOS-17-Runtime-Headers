
@interface NACVolumeWarningMessage : PBCodable <NSCopying> {
    NSString * _category;
    struct { 
        unsigned int originIdentifier : 1; 
        unsigned int volumeWarningState : 1; 
        unsigned int volumeWarningEnabled : 1; 
    }  _has;
    int  _originIdentifier;
    bool  _volumeWarningEnabled;
    int  _volumeWarningState;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic) bool hasOriginIdentifier;
@property (nonatomic) bool hasVolumeWarningEnabled;
@property (nonatomic) bool hasVolumeWarningState;
@property (nonatomic) int originIdentifier;
@property (nonatomic) bool volumeWarningEnabled;
@property (nonatomic) int volumeWarningState;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (bool)hasOriginIdentifier;
- (bool)hasVolumeWarningEnabled;
- (bool)hasVolumeWarningState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)originIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setHasOriginIdentifier:(bool)arg1;
- (void)setHasVolumeWarningEnabled:(bool)arg1;
- (void)setHasVolumeWarningState:(bool)arg1;
- (void)setOriginIdentifier:(int)arg1;
- (void)setVolumeWarningEnabled:(bool)arg1;
- (void)setVolumeWarningState:(int)arg1;
- (bool)volumeWarningEnabled;
- (int)volumeWarningState;
- (void)writeTo:(id)arg1;

@end
