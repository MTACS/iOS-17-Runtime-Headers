
@interface CAXPBSuggestion : PBCodable <NSCopying> {
    NSString * _modelVersion;
    NSMutableArray * _suggestedActions;
}

@property (nonatomic, readonly) bool hasModelVersion;
@property (nonatomic, retain) NSString *modelVersion;
@property (nonatomic, retain) NSMutableArray *suggestedActions;

+ (Class)suggestedActionsType;

- (void).cxx_destruct;
- (void)addSuggestedActions:(id)arg1;
- (void)clearSuggestedActions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModelVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modelVersion;
- (bool)readFrom:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setSuggestedActions:(id)arg1;
- (id)suggestedActions;
- (id)suggestedActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestedActionsCount;
- (void)writeTo:(id)arg1;

@end
