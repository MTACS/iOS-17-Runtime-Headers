
@interface NPKProtoReserveStorageForAppletTypesResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    struct { 
        unsigned int isFull : 1; 
    }  _has;
    bool  _isFull;
    NSMutableArray * _reservationIDs;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic) bool hasIsFull;
@property (nonatomic) bool isFull;
@property (nonatomic, retain) NSMutableArray *reservationIDs;

+ (Class)reservationIDType;

- (void).cxx_destruct;
- (void)addReservationID:(id)arg1;
- (void)clearReservationIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasIsFull;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isFull;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reservationIDAtIndex:(unsigned long long)arg1;
- (id)reservationIDs;
- (unsigned long long)reservationIDsCount;
- (void)setErrorData:(id)arg1;
- (void)setHasIsFull:(bool)arg1;
- (void)setIsFull:(bool)arg1;
- (void)setReservationIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
