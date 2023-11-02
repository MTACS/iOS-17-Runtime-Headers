
@interface AWDWiFiNWActivity : PBCodable <NSCopying> {
    NSMutableArray * _activities;
    NSString * _apProfile;
    NSMutableArray * _btleConnections;
    AWDWiFiNWActivityControllerStats * _controllerStats;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _interfaceStats;
    AWDLinkQualityMeasurements * _linkQualSample;
    NSMutableArray * _peerStats;
    NSMutableArray * _scores;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *activities;
@property (nonatomic, retain) NSString *apProfile;
@property (nonatomic, retain) NSMutableArray *btleConnections;
@property (nonatomic, retain) AWDWiFiNWActivityControllerStats *controllerStats;
@property (nonatomic, readonly) bool hasApProfile;
@property (nonatomic, readonly) bool hasControllerStats;
@property (nonatomic, readonly) bool hasLinkQualSample;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *interfaceStats;
@property (nonatomic, retain) AWDLinkQualityMeasurements *linkQualSample;
@property (nonatomic, retain) NSMutableArray *peerStats;
@property (nonatomic, retain) NSMutableArray *scores;
@property (nonatomic) unsigned long long timestamp;

+ (Class)activitiesType;
+ (Class)btleConnectionType;
+ (Class)interfaceStatsType;
+ (Class)peerStatsType;
+ (Class)scoreType;

- (id)activities;
- (id)activitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)activitiesCount;
- (void)addActivities:(id)arg1;
- (void)addBtleConnection:(id)arg1;
- (void)addInterfaceStats:(id)arg1;
- (void)addPeerStats:(id)arg1;
- (void)addScore:(id)arg1;
- (id)apProfile;
- (id)btleConnectionAtIndex:(unsigned long long)arg1;
- (id)btleConnections;
- (unsigned long long)btleConnectionsCount;
- (void)clearActivities;
- (void)clearBtleConnections;
- (void)clearInterfaceStats;
- (void)clearPeerStats;
- (void)clearScores;
- (id)controllerStats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApProfile;
- (bool)hasControllerStats;
- (bool)hasLinkQualSample;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)interfaceStats;
- (id)interfaceStatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)interfaceStatsCount;
- (bool)isEqual:(id)arg1;
- (id)linkQualSample;
- (void)mergeFrom:(id)arg1;
- (id)peerStats;
- (id)peerStatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)peerStatsCount;
- (bool)readFrom:(id)arg1;
- (id)scoreAtIndex:(unsigned long long)arg1;
- (id)scores;
- (unsigned long long)scoresCount;
- (void)setActivities:(id)arg1;
- (void)setApProfile:(id)arg1;
- (void)setBtleConnections:(id)arg1;
- (void)setControllerStats:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInterfaceStats:(id)arg1;
- (void)setLinkQualSample:(id)arg1;
- (void)setPeerStats:(id)arg1;
- (void)setScores:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
