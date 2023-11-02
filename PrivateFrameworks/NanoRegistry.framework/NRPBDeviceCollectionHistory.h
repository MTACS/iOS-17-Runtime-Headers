
@interface NRPBDeviceCollectionHistory : PBCodable <NSCopying> {
    struct { 
        unsigned int startIndex : 1; 
    }  _has;
    NSMutableArray * _historys;
    long long  _startIndex;
    NRPBSwitchRecordCollection * _switchRecords;
}

@property (nonatomic) bool hasStartIndex;
@property (nonatomic, readonly) bool hasSwitchRecords;
@property (nonatomic, retain) NSMutableArray *historys;
@property (nonatomic) long long startIndex;
@property (nonatomic, retain) NRPBSwitchRecordCollection *switchRecords;

+ (Class)historyType;

- (void).cxx_destruct;
- (void)addHistory:(id)arg1;
- (void)clearHistorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStartIndex;
- (bool)hasSwitchRecords;
- (unsigned long long)hash;
- (id)historyAtIndex:(unsigned long long)arg1;
- (id)historys;
- (unsigned long long)historysCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStartIndex:(bool)arg1;
- (void)setHistorys:(id)arg1;
- (void)setStartIndex:(long long)arg1;
- (void)setSwitchRecords:(id)arg1;
- (long long)startIndex;
- (id)switchRecords;
- (void)writeTo:(id)arg1;

@end
