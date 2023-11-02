
@interface GEOPDLabelLocalizations : PBCodable <NSCopying> {
    NSMutableArray * _localizedStrings;
}

@property (nonatomic, retain) NSMutableArray *localizedStrings;

+ (bool)isValid:(id)arg1;
+ (Class)localizedStringType;

- (void).cxx_destruct;
- (void)addLocalizedString:(id)arg1;
- (id)bestLocalizedName;
- (void)clearLocalizedStrings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)localizedStringAtIndex:(unsigned long long)arg1;
- (id)localizedStrings;
- (unsigned long long)localizedStringsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocalizedStrings:(id)arg1;
- (void)writeTo:(id)arg1;

@end
