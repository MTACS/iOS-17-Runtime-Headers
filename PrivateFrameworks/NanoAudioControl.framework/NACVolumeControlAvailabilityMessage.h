
@interface NACVolumeControlAvailabilityMessage : PBCodable <NSCopying> {
    NSString * _category;
    struct { 
        unsigned int originIdentifier : 1; 
        unsigned int volumeControlAvailable : 1; 
    }  _has;
    int  _originIdentifier;
    bool  _volumeControlAvailable;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic) bool hasOriginIdentifier;
@property (nonatomic) bool hasVolumeControlAvailable;
@property (nonatomic) int originIdentifier;
@property (nonatomic) bool volumeControlAvailable;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (bool)hasOriginIdentifier;
- (bool)hasVolumeControlAvailable;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)originIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setHasOriginIdentifier:(bool)arg1;
- (void)setHasVolumeControlAvailable:(bool)arg1;
- (void)setOriginIdentifier:(int)arg1;
- (void)setVolumeControlAvailable:(bool)arg1;
- (bool)volumeControlAvailable;
- (void)writeTo:(id)arg1;

@end
