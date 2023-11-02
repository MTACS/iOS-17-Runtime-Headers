
@interface ATXPBBlendingModelUICacheUpdate : PBCodable <NSCopying> {
    double  _cacheCreationDate;
    NSMutableArray * _clientModelCacheUpdateUUIDStrings;
    NSMutableArray * _clientModelIds;
    NSString * _consumerSubTypeString;
    struct { 
        unsigned int cacheCreationDate : 1; 
    }  _has;
    ATXPBHomeScreenCachedSuggestion * _homeScreenCachedSuggestion;
    ATXPBSpotlightSuggestionLayout * _spotlightSuggestionLayout;
    ATXPBSuggestionLayout * _suggestionLayout;
    NSString * _uuidString;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
