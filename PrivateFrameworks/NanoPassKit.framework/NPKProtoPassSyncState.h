
@interface NPKProtoPassSyncState : PBCodable <NSCopying> {
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSMutableArray * _passSyncStateItems;
    unsigned int  _version;
}

@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSMutableArray *passSyncStateItems;
@property (nonatomic) unsigned int version;

+ (Class)passSyncStateItemsType;

- (void).cxx_destruct;
- (void)addPassSyncStateItems:(id)arg1;
- (void)clearPassSyncStateItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passSyncStateItems;
- (id)passSyncStateItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)passSyncStateItemsCount;
- (bool)readFrom:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setPassSyncStateItems:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
