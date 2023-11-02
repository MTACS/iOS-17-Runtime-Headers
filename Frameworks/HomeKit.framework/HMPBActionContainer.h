
@interface HMPBActionContainer : PBCodable <NSCopying> {
    HMPBCharacteristicWriteAction * _characteristicWriteAction;
    struct { 
        unsigned int type : 1; 
    }  _has;
    HMPBMediaPlaybackAction * _mediaPlaybackAction;
    HMPBNaturalLightingAction * _naturalLightingAction;
    int  _type;
}

@property (nonatomic, retain) HMPBCharacteristicWriteAction *characteristicWriteAction;
@property (nonatomic, readonly) bool hasCharacteristicWriteAction;
@property (nonatomic, readonly) bool hasMediaPlaybackAction;
@property (nonatomic, readonly) bool hasNaturalLightingAction;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) HMPBMediaPlaybackAction *mediaPlaybackAction;
@property (nonatomic, retain) HMPBNaturalLightingAction *naturalLightingAction;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)characteristicWriteAction;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCharacteristicWriteAction;
- (bool)hasMediaPlaybackAction;
- (bool)hasNaturalLightingAction;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mediaPlaybackAction;
- (void)mergeFrom:(id)arg1;
- (id)naturalLightingAction;
- (bool)readFrom:(id)arg1;
- (void)setCharacteristicWriteAction:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMediaPlaybackAction:(id)arg1;
- (void)setNaturalLightingAction:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
