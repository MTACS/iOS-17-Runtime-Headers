
@interface GEORPFeedbackLayoutConfigResult : PBCodable <NSCopying> {
    NSMutableArray * _forms;
}

@property (nonatomic, retain) NSMutableArray *forms;

+ (Class)formType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addForm:(id)arg1;
- (void)clearForms;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formAtIndex:(unsigned long long)arg1;
- (id)forms;
- (unsigned long long)formsCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setForms:(id)arg1;
- (void)writeTo:(id)arg1;

@end
