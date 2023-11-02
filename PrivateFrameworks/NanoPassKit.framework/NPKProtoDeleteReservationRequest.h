
@interface NPKProtoDeleteReservationRequest : PBRequest <NSCopying> {
    NSMutableArray * _reservationIDs;
}

@property (nonatomic, retain) NSMutableArray *reservationIDs;

+ (Class)reservationIDType;

- (void).cxx_destruct;
- (void)addReservationID:(id)arg1;
- (void)clearReservationIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reservationIDAtIndex:(unsigned long long)arg1;
- (id)reservationIDs;
- (unsigned long long)reservationIDsCount;
- (void)setReservationIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
