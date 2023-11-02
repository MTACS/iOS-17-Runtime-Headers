
@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleTagMetadata : PBCodable <NSCopying> {
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata * _channelTagMetadata;
    NSMutableArray * _topicTagMetadatas;
}

@property (nonatomic, retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *channelTagMetadata;
@property (nonatomic, readonly) bool hasChannelTagMetadata;
@property (nonatomic, retain) NSMutableArray *topicTagMetadatas;

+ (Class)topicTagMetadataType;

- (void).cxx_destruct;
- (void)addTopicTagMetadata:(id)arg1;
- (id)channelTagMetadata;
- (void)clearTopicTagMetadatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChannelTagMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChannelTagMetadata:(id)arg1;
- (void)setTopicTagMetadatas:(id)arg1;
- (id)topicTagMetadataAtIndex:(unsigned long long)arg1;
- (id)topicTagMetadatas;
- (unsigned long long)topicTagMetadatasCount;
- (void)writeTo:(id)arg1;

@end
