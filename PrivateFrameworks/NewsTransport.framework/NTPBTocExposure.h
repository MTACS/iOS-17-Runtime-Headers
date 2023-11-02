
@interface NTPBTocExposure : PBCodable <NSCopying> {
    struct { 
        unsigned int precedingLocation : 1; 
    }  _has;
    int  _precedingLocation;
    NSData * _tocExposureId;
}

@property (nonatomic) bool hasPrecedingLocation;
@property (nonatomic, readonly) bool hasTocExposureId;
@property (nonatomic) int precedingLocation;
@property (nonatomic, retain) NSData *tocExposureId;

- (void).cxx_destruct;
- (int)StringAsPrecedingLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPrecedingLocation;
- (bool)hasTocExposureId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)precedingLocation;
- (id)precedingLocationAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPrecedingLocation:(bool)arg1;
- (void)setPrecedingLocation:(int)arg1;
- (void)setTocExposureId:(id)arg1;
- (id)tocExposureId;
- (void)writeTo:(id)arg1;

@end
