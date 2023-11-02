
@interface ATXPBSuggestionCollection : PBCodable <NSCopying> {
    NSString * _contextTitle;
    NSString * _sectionIdentifier;
    NSMutableArray * _suggestions;
}

@property (nonatomic, retain) NSString *contextTitle;
@property (nonatomic, readonly) bool hasContextTitle;
@property (nonatomic, readonly) bool hasSectionIdentifier;
@property (nonatomic, retain) NSString *sectionIdentifier;
@property (nonatomic, retain) NSMutableArray *suggestions;

+ (Class)suggestionsType;

- (void).cxx_destruct;
- (void)addSuggestions:(id)arg1;
- (void)clearSuggestions;
- (id)contextTitle;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContextTitle;
- (bool)hasSectionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionIdentifier;
- (void)setContextTitle:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestions;
- (id)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (void)writeTo:(id)arg1;

@end
