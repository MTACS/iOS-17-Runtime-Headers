
@interface NMSMediaSyncServiceModelObject : PBCodable <NSCopying> {
    int  _containerType;
    NSData * _dataMultiverseID;
    struct { 
        unsigned int containerType : 1; 
    }  _has;
}

@property (nonatomic) int containerType;
@property (nonatomic, retain) NSData *dataMultiverseID;
@property (nonatomic) bool hasContainerType;
@property (nonatomic, readonly) bool hasDataMultiverseID;

- (void).cxx_destruct;
- (int)StringAsContainerType:(id)arg1;
- (int)containerType;
- (id)containerTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataMultiverseID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainerType;
- (bool)hasDataMultiverseID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainerType:(int)arg1;
- (void)setDataMultiverseID:(id)arg1;
- (void)setHasContainerType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
