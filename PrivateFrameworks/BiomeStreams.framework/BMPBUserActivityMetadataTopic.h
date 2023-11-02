
@interface BMPBUserActivityMetadataTopic : PBCodable <NSCopying> {
    NSString * _title;
    NSString * _topicIdentifier;
}

@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasTopicIdentifier;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *topicIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTitle;
- (bool)hasTopicIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopicIdentifier:(id)arg1;
- (id)title;
- (id)topicIdentifier;
- (void)writeTo:(id)arg1;

@end
