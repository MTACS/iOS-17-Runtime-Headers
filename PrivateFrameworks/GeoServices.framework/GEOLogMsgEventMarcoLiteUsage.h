
@interface GEOLogMsgEventMarcoLiteUsage : PBCodable <NSCopying> {
    struct { 
        unsigned int has_totalNavTime : 1; 
        unsigned int has_vioTrigger : 1; 
    }  _flags;
    unsigned int  _totalNavTime;
    NSMutableArray * _usageStates;
    int  _vioTrigger;
}

@property (nonatomic) bool hasTotalNavTime;
@property (nonatomic) bool hasVioTrigger;
@property (nonatomic) unsigned int totalNavTime;
@property (nonatomic, retain) NSMutableArray *usageStates;
@property (nonatomic) int vioTrigger;

+ (bool)isValid:(id)arg1;
+ (Class)usageStatesType;

- (void).cxx_destruct;
- (int)StringAsVioTrigger:(id)arg1;
- (void)addUsageStates:(id)arg1;
- (void)clearUsageStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTotalNavTime;
- (bool)hasVioTrigger;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTotalNavTime:(bool)arg1;
- (void)setHasVioTrigger:(bool)arg1;
- (void)setTotalNavTime:(unsigned int)arg1;
- (void)setUsageStates:(id)arg1;
- (void)setVioTrigger:(int)arg1;
- (unsigned int)totalNavTime;
- (id)usageStates;
- (id)usageStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)usageStatesCount;
- (int)vioTrigger;
- (id)vioTriggerAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
