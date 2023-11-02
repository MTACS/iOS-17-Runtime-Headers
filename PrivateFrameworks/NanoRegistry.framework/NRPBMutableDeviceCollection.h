
@interface NRPBMutableDeviceCollection : PBCodable <NSCopying> {
    NSMutableArray * _devices;
    NSMutableArray * _pairingIDs;
}

@property (nonatomic, retain) NSMutableArray *devices;
@property (nonatomic, retain) NSMutableArray *pairingIDs;

+ (Class)devicesType;
+ (Class)pairingIDsType;

- (void).cxx_destruct;
- (void)addDevices:(id)arg1;
- (void)addPairingIDs:(id)arg1;
- (void)clearDevices;
- (void)clearPairingIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)devices;
- (id)devicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)devicesCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairingIDs;
- (id)pairingIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pairingIDsCount;
- (bool)readFrom:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setPairingIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
