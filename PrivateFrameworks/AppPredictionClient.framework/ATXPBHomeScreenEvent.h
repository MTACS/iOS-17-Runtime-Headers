
@interface ATXPBHomeScreenEvent : PBCodable <NSCopying> {
    NSString * _appBundleId;
    NSString * _blendingCacheId;
    double  _date;
    NSString * _eventTypeString;
    struct { 
        unsigned int date : 1; 
        unsigned int stackKind : 1; 
        unsigned int stackLocation : 1; 
        unsigned int widgetSize : 1; 
        unsigned int isSuggestedWidget : 1; 
    }  _has;
    NSString * _intentDescription;
    bool  _isSuggestedWidget;
    ATXPBHomeScreenEventMetadata * _metadata;
    NSString * _reason;
    NSString * _stackId;
    int  _stackKind;
    int  _stackLocation;
    NSMutableArray * _suggestionIds;
    NSString * _widgetBundleId;
    NSString * _widgetKind;
    int  _widgetSize;
    NSString * _widgetUniqueId;
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
