
@interface ADUserTransparencyResponse : PBCodable <NSCopying> {
    ADTransparencyDetails * _transparencyDetails;
}

@property (nonatomic, retain) ADTransparencyDetails *transparencyDetails;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTransparencyDetails:(id)arg1;
- (id)transparencyDetails;
- (void)writeTo:(id)arg1;

@end
