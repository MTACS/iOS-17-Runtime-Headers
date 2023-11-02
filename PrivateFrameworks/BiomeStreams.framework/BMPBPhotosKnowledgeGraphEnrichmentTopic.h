
@interface BMPBPhotosKnowledgeGraphEnrichmentTopic : PBCodable <NSCopying> {
    struct { 
        unsigned int score : 1; 
    }  _has;
    NSString * _identifier;
    double  _score;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasScore;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasScore;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setHasScore:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setScore:(double)arg1;
- (void)writeTo:(id)arg1;

@end
