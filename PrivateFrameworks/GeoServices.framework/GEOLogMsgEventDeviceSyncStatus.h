
@interface GEOLogMsgEventDeviceSyncStatus : PBCodable <NSCopying> {
    NSMutableArray * _syncDatas;
}

@property (nonatomic, retain) NSMutableArray *syncDatas;

+ (bool)isValid:(id)arg1;
+ (Class)syncDataType;

- (void).cxx_destruct;
- (void)addSyncData:(id)arg1;
- (void)clearSyncDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSyncDatas:(id)arg1;
- (id)syncDataAtIndex:(unsigned long long)arg1;
- (id)syncDatas;
- (unsigned long long)syncDatasCount;
- (void)writeTo:(id)arg1;

@end
