
@interface BMPBEntityRelationshipEvent : PBCodable <NSCopying> {
    NSMutableArray * _attributes;
    NSString * _clientId;
    NSString * _relationship;
    BMPBEntity * _sourceEntity;
    NSString * _sourceId;
    BMPBEntity * _targetEntity;
}

@property (nonatomic, retain) NSMutableArray *attributes;
@property (nonatomic, retain) NSString *clientId;
@property (nonatomic, readonly) bool hasClientId;
@property (nonatomic, readonly) bool hasRelationship;
@property (nonatomic, readonly) bool hasSourceEntity;
@property (nonatomic, readonly) bool hasSourceId;
@property (nonatomic, readonly) bool hasTargetEntity;
@property (nonatomic, retain) NSString *relationship;
@property (nonatomic, retain) BMPBEntity *sourceEntity;
@property (nonatomic, retain) NSString *sourceId;
@property (nonatomic, retain) BMPBEntity *targetEntity;

+ (Class)attributesType;

- (void).cxx_destruct;
- (void)addAttributes:(id)arg1;
- (id)attributes;
- (id)attributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (id)clientId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientId;
- (bool)hasRelationship;
- (bool)hasSourceEntity;
- (bool)hasSourceId;
- (bool)hasTargetEntity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)relationship;
- (void)setAttributes:(id)arg1;
- (void)setClientId:(id)arg1;
- (void)setRelationship:(id)arg1;
- (void)setSourceEntity:(id)arg1;
- (void)setSourceId:(id)arg1;
- (void)setTargetEntity:(id)arg1;
- (id)sourceEntity;
- (id)sourceId;
- (id)targetEntity;
- (void)writeTo:(id)arg1;

@end
