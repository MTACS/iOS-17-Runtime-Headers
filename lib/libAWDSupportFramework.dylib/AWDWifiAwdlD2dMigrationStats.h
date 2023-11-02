
@interface AWDWifiAwdlD2dMigrationStats : PBCodable <NSCopying> {
    unsigned int  _avgCCA;
    unsigned int  _channel;
    struct { 
        unsigned int rxBytes : 1; 
        unsigned int sessionDuration : 1; 
        unsigned int txBytes : 1; 
        unsigned int avgCCA : 1; 
        unsigned int channel : 1; 
        unsigned int migrationRole : 1; 
        unsigned int peerRssi : 1; 
        unsigned int txFailureCount : 1; 
    }  _has;
    unsigned int  _migrationRole;
    int  _peerRssi;
    unsigned long long  _rxBytes;
    unsigned long long  _sessionDuration;
    unsigned long long  _txBytes;
    unsigned int  _txFailureCount;
}

@property (nonatomic) unsigned int avgCCA;
@property (nonatomic) unsigned int channel;
@property (nonatomic) bool hasAvgCCA;
@property (nonatomic) bool hasChannel;
@property (nonatomic) bool hasMigrationRole;
@property (nonatomic) bool hasPeerRssi;
@property (nonatomic) bool hasRxBytes;
@property (nonatomic) bool hasSessionDuration;
@property (nonatomic) bool hasTxBytes;
@property (nonatomic) bool hasTxFailureCount;
@property (nonatomic) unsigned int migrationRole;
@property (nonatomic) int peerRssi;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned long long sessionDuration;
@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) unsigned int txFailureCount;

- (unsigned int)avgCCA;
- (unsigned int)channel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAvgCCA;
- (bool)hasChannel;
- (bool)hasMigrationRole;
- (bool)hasPeerRssi;
- (bool)hasRxBytes;
- (bool)hasSessionDuration;
- (bool)hasTxBytes;
- (bool)hasTxFailureCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)migrationRole;
- (int)peerRssi;
- (bool)readFrom:(id)arg1;
- (unsigned long long)rxBytes;
- (unsigned long long)sessionDuration;
- (void)setAvgCCA:(unsigned int)arg1;
- (void)setChannel:(unsigned int)arg1;
- (void)setHasAvgCCA:(bool)arg1;
- (void)setHasChannel:(bool)arg1;
- (void)setHasMigrationRole:(bool)arg1;
- (void)setHasPeerRssi:(bool)arg1;
- (void)setHasRxBytes:(bool)arg1;
- (void)setHasSessionDuration:(bool)arg1;
- (void)setHasTxBytes:(bool)arg1;
- (void)setHasTxFailureCount:(bool)arg1;
- (void)setMigrationRole:(unsigned int)arg1;
- (void)setPeerRssi:(int)arg1;
- (void)setRxBytes:(unsigned long long)arg1;
- (void)setSessionDuration:(unsigned long long)arg1;
- (void)setTxBytes:(unsigned long long)arg1;
- (void)setTxFailureCount:(unsigned int)arg1;
- (unsigned long long)txBytes;
- (unsigned int)txFailureCount;
- (void)writeTo:(id)arg1;

@end
