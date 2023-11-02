
@interface NTPBTocCardDrag : PBCodable <NSCopying> {
    NSData * _tocExposureId;
}

@property (nonatomic, readonly) bool hasTocExposureId;
@property (nonatomic, retain) NSData *tocExposureId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTocExposureId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTocExposureId:(id)arg1;
- (id)tocExposureId;
- (void)writeTo:(id)arg1;

@end
