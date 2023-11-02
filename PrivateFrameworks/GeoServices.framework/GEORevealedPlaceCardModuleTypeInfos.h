
@interface GEORevealedPlaceCardModuleTypeInfos : PBCodable <NSCopying> {
    NSMutableArray * _buttons;
}

@property (nonatomic, retain) NSMutableArray *buttons;

+ (Class)buttonsType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addButtons:(id)arg1;
- (id)buttons;
- (id)buttonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buttonsCount;
- (void)clearButtons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)writeTo:(id)arg1;

@end
