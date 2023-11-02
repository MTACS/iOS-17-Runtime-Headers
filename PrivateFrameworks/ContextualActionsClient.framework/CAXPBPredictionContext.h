
@interface CAXPBPredictionContext : PBCodable <NSCopying> {
    NSMutableArray * _contents;
    NSMutableArray * _previousActions;
    NSString * _searchTerm;
    NSString * _sourceAppName;
    double  _suggestionDate;
}

@property (nonatomic, retain) NSMutableArray *contents;
@property (nonatomic, readonly) bool hasSearchTerm;
@property (nonatomic, readonly) bool hasSourceAppName;
@property (nonatomic, retain) NSMutableArray *previousActions;
@property (nonatomic, retain) NSString *searchTerm;
@property (nonatomic, retain) NSString *sourceAppName;
@property (nonatomic) double suggestionDate;

+ (Class)contentsType;
+ (Class)previousActionsType;

- (void).cxx_destruct;
- (void)addContents:(id)arg1;
- (void)addPreviousActions:(id)arg1;
- (void)clearContents;
- (void)clearPreviousActions;
- (id)contents;
- (id)contentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSearchTerm;
- (bool)hasSourceAppName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)previousActions;
- (id)previousActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)previousActionsCount;
- (bool)readFrom:(id)arg1;
- (id)searchTerm;
- (void)setContents:(id)arg1;
- (void)setPreviousActions:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSourceAppName:(id)arg1;
- (void)setSuggestionDate:(double)arg1;
- (id)sourceAppName;
- (double)suggestionDate;
- (void)writeTo:(id)arg1;

@end
