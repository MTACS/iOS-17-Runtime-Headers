
@interface ATXPBHomeScreenCachedSuggestion : PBCodable <NSCopying> {
    NSMutableArray * _cachedAppPredictionPanelIds;
    NSMutableArray * _cachedAppPredictionPanelLayouts;
    NSMutableArray * _cachedSuggestedWidgetLayoutListKeys;
    NSMutableArray * _cachedSuggestedWidgetLayoutLists;
    NSMutableArray * _cachedSuggestionWidgetIds;
    NSMutableArray * _cachedSuggestionWidgetLayouts;
    NSMutableArray * _cachedTopOfStackLayoutKeys;
    NSMutableArray * _cachedTopOfStackLayouts;
    NSMutableArray * _fallbackSuggestions;
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
