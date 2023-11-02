
@interface SIRINLUEXTERNALSystemGaveOptions : PBCodable <NSCopying> {
    NSMutableArray * _choices;
}

@property (nonatomic, retain) NSMutableArray *choices;

+ (Class)choicesType;

- (void).cxx_destruct;
- (void)addChoices:(id)arg1;
- (id)choices;
- (id)choicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)choicesCount;
- (void)clearChoices;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChoices:(id)arg1;
- (void)writeTo:(id)arg1;

@end
