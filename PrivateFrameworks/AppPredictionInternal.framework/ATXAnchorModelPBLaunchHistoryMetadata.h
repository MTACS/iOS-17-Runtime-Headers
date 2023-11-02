
@interface ATXAnchorModelPBLaunchHistoryMetadata : PBCodable <NSCopying> {
    struct { 
        unsigned int launchesInLast12Hours : 1; 
        unsigned int launchesInLast14Days : 1; 
        unsigned int launchesInLast24Hours : 1; 
        unsigned int launchesInLast28Days : 1; 
        unsigned int launchesInLast2Hours : 1; 
        unsigned int launchesInLast48Hours : 1; 
        unsigned int launchesInLast7Days : 1; 
    }  _has;
    unsigned int  _launchesInLast12Hours;
    unsigned int  _launchesInLast14Days;
    unsigned int  _launchesInLast24Hours;
    unsigned int  _launchesInLast28Days;
    unsigned int  _launchesInLast2Hours;
    unsigned int  _launchesInLast48Hours;
    unsigned int  _launchesInLast7Days;
}

@property (nonatomic) bool hasLaunchesInLast12Hours;
@property (nonatomic) bool hasLaunchesInLast14Days;
@property (nonatomic) bool hasLaunchesInLast24Hours;
@property (nonatomic) bool hasLaunchesInLast28Days;
@property (nonatomic) bool hasLaunchesInLast2Hours;
@property (nonatomic) bool hasLaunchesInLast48Hours;
@property (nonatomic) bool hasLaunchesInLast7Days;
@property (nonatomic) unsigned int launchesInLast12Hours;
@property (nonatomic) unsigned int launchesInLast14Days;
@property (nonatomic) unsigned int launchesInLast24Hours;
@property (nonatomic) unsigned int launchesInLast28Days;
@property (nonatomic) unsigned int launchesInLast2Hours;
@property (nonatomic) unsigned int launchesInLast48Hours;
@property (nonatomic) unsigned int launchesInLast7Days;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLaunchesInLast12Hours;
- (bool)hasLaunchesInLast14Days;
- (bool)hasLaunchesInLast24Hours;
- (bool)hasLaunchesInLast28Days;
- (bool)hasLaunchesInLast2Hours;
- (bool)hasLaunchesInLast48Hours;
- (bool)hasLaunchesInLast7Days;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)launchesInLast12Hours;
- (unsigned int)launchesInLast14Days;
- (unsigned int)launchesInLast24Hours;
- (unsigned int)launchesInLast28Days;
- (unsigned int)launchesInLast2Hours;
- (unsigned int)launchesInLast48Hours;
- (unsigned int)launchesInLast7Days;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLaunchesInLast12Hours:(bool)arg1;
- (void)setHasLaunchesInLast14Days:(bool)arg1;
- (void)setHasLaunchesInLast24Hours:(bool)arg1;
- (void)setHasLaunchesInLast28Days:(bool)arg1;
- (void)setHasLaunchesInLast2Hours:(bool)arg1;
- (void)setHasLaunchesInLast48Hours:(bool)arg1;
- (void)setHasLaunchesInLast7Days:(bool)arg1;
- (void)setLaunchesInLast12Hours:(unsigned int)arg1;
- (void)setLaunchesInLast14Days:(unsigned int)arg1;
- (void)setLaunchesInLast24Hours:(unsigned int)arg1;
- (void)setLaunchesInLast28Days:(unsigned int)arg1;
- (void)setLaunchesInLast2Hours:(unsigned int)arg1;
- (void)setLaunchesInLast48Hours:(unsigned int)arg1;
- (void)setLaunchesInLast7Days:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
