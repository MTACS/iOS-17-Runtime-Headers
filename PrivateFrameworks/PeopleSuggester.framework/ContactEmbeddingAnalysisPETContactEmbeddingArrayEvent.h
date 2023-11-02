
@interface ContactEmbeddingAnalysisPETContactEmbeddingArrayEvent : PBCodable <NSCopying> {
    NSMutableArray * _contactEmbeddings;
    NSString * _sessinobd;
    NSString * _userId;
}

@property (nonatomic, retain) NSMutableArray *contactEmbeddings;
@property (nonatomic, retain) NSString *sessinobd;
@property (nonatomic, retain) NSString *userId;

+ (Class)contactEmbeddingType;

- (void).cxx_destruct;
- (void)addContactEmbedding:(id)arg1;
- (void)clearContactEmbeddings;
- (id)contactEmbeddingAtIndex:(unsigned long long)arg1;
- (id)contactEmbeddings;
- (unsigned long long)contactEmbeddingsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessinobd;
- (void)setContactEmbeddings:(id)arg1;
- (void)setSessinobd:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)userId;
- (void)writeTo:(id)arg1;

@end
