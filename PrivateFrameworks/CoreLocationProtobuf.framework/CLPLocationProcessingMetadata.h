
@interface CLPLocationProcessingMetadata : PBCodable <NSCopying> {
    struct { 
        unsigned int tripSourceType : 1; 
    }  _has;
    int  _tripSourceType;
}

@property (nonatomic) bool hasTripSourceType;
@property (nonatomic) int tripSourceType;

- (int)StringAsTripSourceType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTripSourceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTripSourceType:(bool)arg1;
- (void)setTripSourceType:(int)arg1;
- (int)tripSourceType;
- (id)tripSourceTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
