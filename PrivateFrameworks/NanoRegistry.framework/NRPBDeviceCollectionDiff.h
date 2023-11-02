
@interface NRPBDeviceCollectionDiff : PBCodable <NSCopying> {
    NSMutableArray * _diffs;
    NSMutableArray * _pairingIDs;
}

@property (nonatomic, retain) NSMutableArray *diffs;
@property (nonatomic, retain) NSMutableArray *pairingIDs;

+ (Class)diffsType;
+ (Class)pairingIDsType;

- (void).cxx_destruct;
- (void)addDiffs:(id)arg1;
- (void)addPairingIDs:(id)arg1;
- (void)clearDiffs;
- (void)clearPairingIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)diffs;
- (id)diffsAtIndex:(unsigned long long)arg1;
- (unsigned long long)diffsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairingIDs;
- (id)pairingIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pairingIDsCount;
- (bool)readFrom:(id)arg1;
- (void)setDiffs:(id)arg1;
- (void)setPairingIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
