
@interface HMPBNaturalLightingAction : PBCodable <NSCopying> {
    struct { 
        unsigned int naturalLightingEnabled : 1; 
    }  _has;
    NSData * _lightProfileUUID;
    bool  _naturalLightingEnabled;
    NSData * _uuid;
}

@property (nonatomic, readonly) bool hasLightProfileUUID;
@property (nonatomic) bool hasNaturalLightingEnabled;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) NSData *lightProfileUUID;
@property (nonatomic) bool naturalLightingEnabled;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLightProfileUUID;
- (bool)hasNaturalLightingEnabled;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lightProfileUUID;
- (void)mergeFrom:(id)arg1;
- (bool)naturalLightingEnabled;
- (bool)readFrom:(id)arg1;
- (void)setHasNaturalLightingEnabled:(bool)arg1;
- (void)setLightProfileUUID:(id)arg1;
- (void)setNaturalLightingEnabled:(bool)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
