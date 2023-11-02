
@interface AppTelemetryQBSInvestigation : PBCodable <NSCopying> {
    unsigned long long  _clientTruthDirFaultCount;
    struct { 
        unsigned int clientTruthDirFaultCount : 1; 
        unsigned int serverTruthDirCount : 1; 
        unsigned int serverTruthDirFaultCount : 1; 
        unsigned int serverTruthTotalItemsCount : 1; 
        unsigned int timeSinceLogin : 1; 
    }  _has;
    unsigned long long  _serverTruthDirCount;
    unsigned long long  _serverTruthDirFaultCount;
    unsigned long long  _serverTruthTotalItemsCount;
    unsigned long long  _timeSinceLogin;
}

@property (nonatomic) unsigned long long clientTruthDirFaultCount;
@property (nonatomic) bool hasClientTruthDirFaultCount;
@property (nonatomic) bool hasServerTruthDirCount;
@property (nonatomic) bool hasServerTruthDirFaultCount;
@property (nonatomic) bool hasServerTruthTotalItemsCount;
@property (nonatomic) bool hasTimeSinceLogin;
@property (nonatomic) unsigned long long serverTruthDirCount;
@property (nonatomic) unsigned long long serverTruthDirFaultCount;
@property (nonatomic) unsigned long long serverTruthTotalItemsCount;
@property (nonatomic) unsigned long long timeSinceLogin;

- (unsigned long long)clientTruthDirFaultCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientTruthDirFaultCount;
- (bool)hasServerTruthDirCount;
- (bool)hasServerTruthDirFaultCount;
- (bool)hasServerTruthTotalItemsCount;
- (bool)hasTimeSinceLogin;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)serverTruthDirCount;
- (unsigned long long)serverTruthDirFaultCount;
- (unsigned long long)serverTruthTotalItemsCount;
- (void)setClientTruthDirFaultCount:(unsigned long long)arg1;
- (void)setHasClientTruthDirFaultCount:(bool)arg1;
- (void)setHasServerTruthDirCount:(bool)arg1;
- (void)setHasServerTruthDirFaultCount:(bool)arg1;
- (void)setHasServerTruthTotalItemsCount:(bool)arg1;
- (void)setHasTimeSinceLogin:(bool)arg1;
- (void)setServerTruthDirCount:(unsigned long long)arg1;
- (void)setServerTruthDirFaultCount:(unsigned long long)arg1;
- (void)setServerTruthTotalItemsCount:(unsigned long long)arg1;
- (void)setTimeSinceLogin:(unsigned long long)arg1;
- (unsigned long long)timeSinceLogin;
- (void)writeTo:(id)arg1;

@end
