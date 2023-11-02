
@interface ACHCodableTemplateArray : PBCodable <NSCopying> {
    NSMutableArray * _templates;
}

@property (nonatomic, retain) NSMutableArray *templates;

+ (Class)templatesType;

- (void).cxx_destruct;
- (void)addTemplates:(id)arg1;
- (void)clearTemplates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithCodableTemplates:(id)arg1;
- (id)initWithSerializedData:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTemplates:(id)arg1;
- (id)templates;
- (id)templatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)templatesCount;
- (void)writeTo:(id)arg1;

@end
