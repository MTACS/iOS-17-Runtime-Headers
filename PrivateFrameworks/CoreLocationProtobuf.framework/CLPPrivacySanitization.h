
@interface CLPPrivacySanitization : PBCodable <NSCopying> {
    struct { 
        unsigned int tripSegmentType : 1; 
    }  _has;
    int  _tripSegmentType;
    NSString * _version;
}

@property (nonatomic) bool hasTripSegmentType;
@property (nonatomic) int tripSegmentType;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (int)StringAsTripSegmentType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTripSegmentType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTripSegmentType:(bool)arg1;
- (void)setTripSegmentType:(int)arg1;
- (void)setVersion:(id)arg1;
- (int)tripSegmentType;
- (id)tripSegmentTypeAsString:(int)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
