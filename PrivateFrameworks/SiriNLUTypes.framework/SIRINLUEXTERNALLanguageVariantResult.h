
@interface SIRINLUEXTERNALLanguageVariantResult : PBCodable <NSCopying> {
    NSMutableArray * _multilingualVariants;
    SIRINLUEXTERNALParser * _parser;
}

@property (nonatomic, readonly) bool hasParser;
@property (nonatomic, retain) NSMutableArray *multilingualVariants;
@property (nonatomic, retain) SIRINLUEXTERNALParser *parser;

+ (Class)multilingualVariantType;

- (void).cxx_destruct;
- (void)addMultilingualVariant:(id)arg1;
- (void)clearMultilingualVariants;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasParser;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)multilingualVariantAtIndex:(unsigned long long)arg1;
- (id)multilingualVariants;
- (unsigned long long)multilingualVariantsCount;
- (id)parser;
- (bool)readFrom:(id)arg1;
- (void)setMultilingualVariants:(id)arg1;
- (void)setParser:(id)arg1;
- (void)writeTo:(id)arg1;

@end
