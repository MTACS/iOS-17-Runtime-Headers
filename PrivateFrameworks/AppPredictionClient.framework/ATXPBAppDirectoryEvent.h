
@interface ATXPBAppDirectoryEvent : PBCodable <NSCopying> {
    NSString * _blendingCacheId;
    NSString * _bundleId;
    unsigned long long  _bundleIndex;
    unsigned long long  _categoryID;
    unsigned long long  _categoryIndex;
    double  _date;
    NSMutableArray * _engagedSuggestionIds;
    unsigned long long  _eventType;
    struct { 
        unsigned int bundleIndex : 1; 
        unsigned int categoryID : 1; 
        unsigned int categoryIndex : 1; 
        unsigned int date : 1; 
        unsigned int eventType : 1; 
        unsigned int searchQueryLength : 1; 
        unsigned int searchTab : 1; 
    }  _has;
    ATXPBAppDirectoryEventMetadata * _metadata;
    unsigned long long  _searchQueryLength;
    unsigned long long  _searchTab;
    NSMutableArray * _shownSuggestionIds;
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
