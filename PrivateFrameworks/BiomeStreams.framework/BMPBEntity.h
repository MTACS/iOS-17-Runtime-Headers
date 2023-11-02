
@interface BMPBEntity : PBCodable <NSCopying> {
    int  _entityType;
    struct { 
        unsigned int entityType : 1; 
    }  _has;
    BMPBPersonEntity * _personEntity;
    BMPBTopicEntity * _topicEntity;
}

@property (nonatomic) int entityType;
@property (nonatomic) bool hasEntityType;
@property (nonatomic, readonly) bool hasPersonEntity;
@property (nonatomic, readonly) bool hasTopicEntity;
@property (nonatomic, retain) BMPBPersonEntity *personEntity;
@property (nonatomic, retain) BMPBTopicEntity *topicEntity;

- (void).cxx_destruct;
- (int)StringAsEntityType:(id)arg1;
- (void)clearOneofValuesForEntityType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)entityType;
- (id)entityTypeAsString:(int)arg1;
- (bool)hasEntityType;
- (bool)hasPersonEntity;
- (bool)hasTopicEntity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)personEntity;
- (bool)readFrom:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setPersonEntity:(id)arg1;
- (void)setTopicEntity:(id)arg1;
- (id)topicEntity;
- (void)writeTo:(id)arg1;

@end
