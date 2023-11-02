
@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable <NSCopying> {
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * _globalCohorts;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * _sourceChannelCohorts;
    NSMutableArray * _topicCohortScores;
    NSMutableArray * _topicCohorts;
}

@property (nonatomic, retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (nonatomic, readonly) bool hasGlobalCohorts;
@property (nonatomic, readonly) bool hasSourceChannelCohorts;
@property (nonatomic, retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts;
@property (nonatomic, retain) NSMutableArray *topicCohortScores;
@property (nonatomic, retain) NSMutableArray *topicCohorts;

+ (Class)topicCohortScoresType;
+ (Class)topicCohortsType;

- (void).cxx_destruct;
- (void)addTopicCohortScores:(id)arg1;
- (void)addTopicCohorts:(id)arg1;
- (void)clearTopicCohortScores;
- (void)clearTopicCohorts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)globalCohorts;
- (bool)hasGlobalCohorts;
- (bool)hasSourceChannelCohorts;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGlobalCohorts:(id)arg1;
- (void)setSourceChannelCohorts:(id)arg1;
- (void)setTopicCohortScores:(id)arg1;
- (void)setTopicCohorts:(id)arg1;
- (id)sourceChannelCohorts;
- (id)topicCohortScores;
- (id)topicCohortScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicCohortScoresCount;
- (id)topicCohorts;
- (id)topicCohortsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicCohortsCount;
- (void)writeTo:(id)arg1;

@end
