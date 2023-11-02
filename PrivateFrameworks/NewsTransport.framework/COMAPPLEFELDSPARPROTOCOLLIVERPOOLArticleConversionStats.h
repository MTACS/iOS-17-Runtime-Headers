
@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats : PBCodable <NSCopying> {
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * _channelConversionStats;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * _globalConversionStats;
    NSMutableArray * _topicConversionStats;
}

@property (nonatomic, retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *channelConversionStats;
@property (nonatomic, retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property (nonatomic, readonly) bool hasChannelConversionStats;
@property (nonatomic, readonly) bool hasGlobalConversionStats;
@property (nonatomic, retain) NSMutableArray *topicConversionStats;

+ (Class)topicConversionStatsType;

- (void).cxx_destruct;
- (void)addTopicConversionStats:(id)arg1;
- (id)channelConversionStats;
- (void)clearTopicConversionStats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)globalConversionStats;
- (bool)hasChannelConversionStats;
- (bool)hasGlobalConversionStats;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChannelConversionStats:(id)arg1;
- (void)setGlobalConversionStats:(id)arg1;
- (void)setTopicConversionStats:(id)arg1;
- (id)topicConversionStats;
- (id)topicConversionStatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicConversionStatsCount;
- (void)writeTo:(id)arg1;

@end
