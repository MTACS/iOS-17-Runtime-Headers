
@interface BMPBTopicEntity : PBCodable <NSCopying> {
    NSMutableArray * _attributes;
    NSString * _displayName;
    NSString * _topicId;
}

@property (nonatomic, retain) NSMutableArray *attributes;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasTopicId;
@property (nonatomic, retain) NSString *topicId;

+ (Class)attributesType;

- (void).cxx_destruct;
- (void)addAttributes:(id)arg1;
- (id)attributes;
- (id)attributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasDisplayName;
- (bool)hasTopicId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setTopicId:(id)arg1;
- (id)topicId;
- (void)writeTo:(id)arg1;

@end
