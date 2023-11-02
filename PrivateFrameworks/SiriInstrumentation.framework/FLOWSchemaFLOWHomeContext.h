
@interface FLOWSchemaFLOWHomeContext : SISchemaInstrumentationMessage {
    unsigned int  _appleTvCount;
    struct { 
        unsigned int homeCount : 1; 
        unsigned int homePodCount : 1; 
        unsigned int appleTvCount : 1; 
        unsigned int hasCurrentHome : 1; 
    }  _has;
    bool  _hasCurrentHome;
    unsigned int  _homeCount;
    unsigned int  _homePodCount;
}

@property (nonatomic) unsigned int appleTvCount;
@property (nonatomic) bool hasAppleTvCount;
@property (nonatomic) bool hasCurrentHome;
@property (nonatomic) bool hasHasCurrentHome;
@property (nonatomic) bool hasHomeCount;
@property (nonatomic) bool hasHomePodCount;
@property (nonatomic) unsigned int homeCount;
@property (nonatomic) unsigned int homePodCount;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned int)appleTvCount;
- (void)deleteAppleTvCount;
- (void)deleteHasCurrentHome;
- (void)deleteHomeCount;
- (void)deleteHomePodCount;
- (id)dictionaryRepresentation;
- (bool)hasAppleTvCount;
- (bool)hasCurrentHome;
- (bool)hasHasCurrentHome;
- (bool)hasHomeCount;
- (bool)hasHomePodCount;
- (unsigned long long)hash;
- (unsigned int)homeCount;
- (unsigned int)homePodCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppleTvCount:(unsigned int)arg1;
- (void)setHasAppleTvCount:(bool)arg1;
- (void)setHasCurrentHome:(bool)arg1;
- (void)setHasHasCurrentHome:(bool)arg1;
- (void)setHasHomeCount:(bool)arg1;
- (void)setHasHomePodCount:(bool)arg1;
- (void)setHomeCount:(unsigned int)arg1;
- (void)setHomePodCount:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
