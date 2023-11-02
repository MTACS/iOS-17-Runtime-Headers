
@interface BMPBPhotosKnowledgeGraphEnrichmentEntity : PBCodable <NSCopying> {
    unsigned int  _category;
    struct { 
        unsigned int score : 1; 
        unsigned int category : 1; 
    }  _has;
    NSString * _language;
    NSString * _name;
    double  _score;
}

@property (nonatomic) unsigned int category;
@property (nonatomic) bool hasCategory;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasScore;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (unsigned int)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (bool)hasLanguage;
- (bool)hasName;
- (bool)hasScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setCategory:(unsigned int)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setScore:(double)arg1;
- (void)writeTo:(id)arg1;

@end
