
@interface ATXPBHomeScreenEventMetadata : PBCodable <NSCopying> {
    NSMutableArray * _bundleIds;
    NSString * _engagedUrl;
    struct { 
        unsigned int pageIndex : 1; 
        unsigned int suggestedPageType : 1; 
        unsigned int isStalenessRotation : 1; 
        unsigned int isSuggestionInAddWidgetSheet : 1; 
        unsigned int isWidgetInTodayView : 1; 
    }  _has;
    bool  _isStalenessRotation;
    bool  _isSuggestionInAddWidgetSheet;
    bool  _isWidgetInTodayView;
    unsigned long long  _pageIndex;
    NSMutableArray * _stackIds;
    int  _suggestedPageType;
    ATXPBCGRectWrapper * _visibleRect;
    NSMutableArray * _widgetIdentifiables;
    NSMutableArray * _widgetInStackIdentifiables;
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
