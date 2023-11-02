
@interface CLPCellNeighborsGroup : PBCodable <NSCopying> {
    NSMutableArray * _cdmaNeighbors;
    NSMutableArray * _gsmNeighbors;
    NSMutableArray * _lteNeighbors;
    NSMutableArray * _nrNeighbors;
    NSMutableArray * _scdmaNeighbors;
}

@property (nonatomic, retain) NSMutableArray *cdmaNeighbors;
@property (nonatomic, retain) NSMutableArray *gsmNeighbors;
@property (nonatomic, retain) NSMutableArray *lteNeighbors;
@property (nonatomic, retain) NSMutableArray *nrNeighbors;
@property (nonatomic, retain) NSMutableArray *scdmaNeighbors;

+ (Class)cdmaNeighborsType;
+ (Class)gsmNeighborsType;
+ (Class)lteNeighborsType;
+ (Class)nrNeighborsType;
+ (Class)scdmaNeighborsType;

- (void).cxx_destruct;
- (void)addCdmaNeighbors:(id)arg1;
- (void)addGsmNeighbors:(id)arg1;
- (void)addLteNeighbors:(id)arg1;
- (void)addNrNeighbors:(id)arg1;
- (void)addScdmaNeighbors:(id)arg1;
- (id)cdmaNeighbors;
- (id)cdmaNeighborsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cdmaNeighborsCount;
- (void)clearCdmaNeighbors;
- (void)clearGsmNeighbors;
- (void)clearLteNeighbors;
- (void)clearNrNeighbors;
- (void)clearScdmaNeighbors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)gsmNeighbors;
- (id)gsmNeighborsAtIndex:(unsigned long long)arg1;
- (unsigned long long)gsmNeighborsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lteNeighbors;
- (id)lteNeighborsAtIndex:(unsigned long long)arg1;
- (unsigned long long)lteNeighborsCount;
- (void)mergeFrom:(id)arg1;
- (id)nrNeighbors;
- (id)nrNeighborsAtIndex:(unsigned long long)arg1;
- (unsigned long long)nrNeighborsCount;
- (bool)readFrom:(id)arg1;
- (id)scdmaNeighbors;
- (id)scdmaNeighborsAtIndex:(unsigned long long)arg1;
- (unsigned long long)scdmaNeighborsCount;
- (void)setCdmaNeighbors:(id)arg1;
- (void)setGsmNeighbors:(id)arg1;
- (void)setLteNeighbors:(id)arg1;
- (void)setNrNeighbors:(id)arg1;
- (void)setScdmaNeighbors:(id)arg1;
- (void)writeTo:(id)arg1;

@end
